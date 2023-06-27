module PE2 where

-- PE2: Dungeon Crawler
-- Dungeon map is :: Tree Chamber [Encounter]
-- Each encounter is either a fight or a treasure
-- Fights deal you damage (reduce HP) but enemies drop some gold (add
-- gold)
-- Tresures just give gold, or potions (which give hp)
-- Nodes hold encounters, when you visit a node you go through all of them in order
-- You start with a certain amount of HP and 0 gold.
-- You lose HP and accumulate gold as you descend the tree and go through encounters

-- Polymorphic tree structure
data Tree a b = EmptyTree | Leaf a b | Node a b [Tree a b] deriving (Show, Eq)

-- Every location in the tree is of some Chamber type.
data Chamber = Cavern |
               NarrowPassage |
               UndergroundRiver |
               SlipperyRocks deriving (Show, Eq)

-- An enemy has a name, an amount of damage that it deals
-- and an amount of gold that it drops (in that order).
data Enemy = Enemy String Integer Integer deriving (Show, Eq)

-- Gold n gives n amount of gold
-- Potion n heals n hp
data Loot = Gold Integer | Potion Integer deriving (Show, Eq)

-- An encounter is either a Fight with an Enemy, or a treasure where
-- you find Loot
data Encounter = Fight Enemy | Treasure Loot deriving (Show, Eq)

-- This is a type synonym for how we will represents our dungeons
type Dungeon = Tree Chamber [Encounter]

resolveEncounter (Fight (Enemy _ damage drops)) (hp, gold) = (hp - damage, gold + drops)
resolveEncounter (Treasure (Gold value)) (hp, gold) = (hp, gold + value)
resolveEncounter (Treasure (Potion health)) (hp, gold) = (hp + health, gold)

resolveAll (hp, gold) = foldr resolveEncounter (hp, gold)

-- First argument is starting HP
-- Second argument is the dungeon map
-- Third argument is the path (each integer in the list shows what child
-- you descend into)
-- Calculate how much HP you have left and how much gold you've
-- accumulated after traversing the given path
traversePath :: Integer -> Dungeon -> [Int] -> (Integer, Integer)
traversePath hp (Leaf _ encounters) [] = resolveAll (hp, 0) encounters
traversePath hp (Node _ encounters children) (c:path) =
    (hp + nodeHp + pathHp, nodeGold + pathGold) where
        (nodeHp, nodeGold) = resolveAll (0, 0) encounters
        (pathHp, pathGold) = traversePath 0 (children !! c) path

resolveSequentially (hp, gold) [] = (hp, gold)
resolveSequentially (hp, gold) (encounter:rest)
    | hpLeft > 0 = resolveSequentially (hpLeft, goldTotal) rest
    | otherwise  = (hpLeft, gold)
    where (hpLeft, goldTotal) = resolveEncounter encounter (hp, gold)

-- First argument is starting HP
-- Second argument is dungeon map
-- Find which path down the tree yields the most gold for you
-- You cannot turn back, i.e. you'll find a non-branching path
-- You do not need to reach the bottom of the tree
-- Return how much gold you've accumulated
findMaximumGain :: Integer -> Dungeon -> Integer
findMaximumGain _ EmptyTree = 0
findMaximumGain hp (Leaf _ encounters) =
    if hpLeft > 0 then gold else 0 where
        (hpLeft, gold) = resolveSequentially (hp, 0) encounters
findMaximumGain hp (Node _ encounters children) =
    if hpLeft > 0 then gain else 0 where
        (hpLeft, nodeGain) = resolveSequentially (hp, 0) encounters
        childGain = maximum (map (findMaximumGain hpLeft) children)
        gain = nodeGain + childGain

-- First argument is starting HP
-- Second argument is the dungeon map
-- Remove paths that you cannot go thorugh with your starting HP. (By
-- removing nodes from tree).
-- Some internal nodes may become leafs during this process, make the
-- necessary changes in such a case.
findViablePaths :: Integer -> Dungeon -> Dungeon
findViablePaths _ EmptyTree = EmptyTree
findViablePaths hp leaf@(Leaf _ encounters)
    | hpLeft > 0 = leaf
    | otherwise  = EmptyTree
    where (hpLeft, _) = resolveSequentially (hp, 0) encounters
findViablePaths hp (Node room encounters children)
    | hpLeft <= 0         = EmptyTree
    | null viableChildren = Leaf room encounters
    | otherwise           = Node room encounters viableChildren
    where (hpLeft, _)    = resolveSequentially (hp, 0) encounters
          viableChildren = filter (/= EmptyTree) (map (findViablePaths hpLeft) children)

getMDP x [] = x
getMDP (cdist, cmDP) ((_, (dist, mDP)):rest)
    | cdist < dist = (dist, mDP)
    | otherwise    = (cdist, cmDP)

-- d1 always to the left of d2
getTwoDeepest x y [] = (x, y)
getTwoDeepest (d1, p1) (d2, p2) (((d, p), _):rest)
    | d < d1 && d < d2  = getTwoDeepest (d1, p1) (d2, p2) rest
    | d2 < d && d2 < d1 = getTwoDeepest (d1, p1) (d, p) rest
    | otherwise         = getTwoDeepest (d2, p2) (d, p) rest

distanceHelper :: Dungeon -> ((Integer, Dungeon), (Integer, Dungeon))
distanceHelper EmptyTree = ((0, EmptyTree), (0, EmptyTree))
distanceHelper leaf@(Leaf _ _) = ((0, leaf), (0, leaf))
distanceHelper (Node room encounters [child])
    | dist < depth + 1 = ((depth+1, Node room encounters [deepPath]), (depth+1, Node room encounters [deepPath]))
    | otherwise        = ((depth+1, Node room encounters [deepPath]), (dist, mDP))
    where ((depth, deepPath), (dist, mDP)) = distanceHelper child
distanceHelper (Node room encounters children)
    | dist < depth1 + depth2 + 2 = ((0, EmptyTree), (depth1+depth2+2, Node room encounters [path1, path2]))
    | otherwise                  = ((0, EmptyTree), (dist, mDP))
    where childStats = map distanceHelper children
          (dist, mDP) = getMDP (0, EmptyTree) childStats
          ((x,_):(y,_):rest) = childStats
          ((depth1, path1), (depth2, path2)) = getTwoDeepest x y rest

-- First argument is starting HP
-- Second Argument is dungeon map
-- Find, among the viable paths in the tree (so the nodes you cannot
-- visit is already removed) the two most distant nodes, i.e. the two
-- nodes that are furthest awat from each other.
mostDistantPair :: Integer -> Dungeon -> (Integer, Dungeon)
mostDistantPair hp dungeon = snd (distanceHelper (findViablePaths hp dungeon))

divide :: Integer -> Integer -> Double
divide x y = if y <= 0 then a/0 else a/b
    where a = fromInteger x
          b = fromInteger y

getMostEfficient x [] = x
getMostEfficient temp@(_,_,maxEf,_) (cur@(_,_,curEf,_):rest)
    | curEf > maxEf = getMostEfficient cur rest
    | otherwise     = getMostEfficient temp rest

efficiencyHelper EmptyTree = (0, 0, 0.0, EmptyTree)
efficiencyHelper leaf@(Leaf _ encounters) = (hp, gold, divide gold (-hp), leaf)
    where (hp, gold) = resolveAll (0, 0) encounters 
efficiencyHelper node@(Node _ encounters children)
    | totalEfficiency > childEfficiency = (totalHp, totalGold, totalEfficiency, node)
    | otherwise                         = (totalHp, totalGold, childEfficiency, child)
    where childValues =  map efficiencyHelper children
          mostEfficientChildValues = getMostEfficient (head childValues) (tail childValues)
          childEfficiency = (\(_,_,ef,_) -> ef) mostEfficientChildValues
          child = (\(_,_,_,child) -> child) mostEfficientChildValues
          nodeSums = resolveAll (0, 0) encounters
          (totalHp, totalGold) = foldr (\(hp,gold,_,_) (accHp, accGold) -> (hp+accHp, gold+accGold)) nodeSums childValues
          totalEfficiency = divide totalGold (-totalHp)

-- Find the subtree that has the highest total gold/damage ratio
-- Simply divide the total gold in the subtree by the total damage
-- in the subtree. You only take whole subtrees (i.e you can take a new
-- node as the root of your subtree, but you cannot remove nodes
-- below it). Note that the answer may be the whole tree.
mostEfficientSubtree :: Dungeon -> Dungeon
mostEfficientSubtree dungeon = (\(_,_,_,subtree) -> subtree) (efficiencyHelper dungeon)
