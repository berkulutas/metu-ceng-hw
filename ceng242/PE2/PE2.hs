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

-- First argument is starting HP
-- Second argument is the dungeon map
-- Third argument is the path (each integer in the list shows what child
-- you descend into)
-- Calculate how much HP you have left and how much gold you've
-- accumulated after traversing the given path
-- travers a dungeon path and return the remaining health points and accumulated gold.
traversePath :: Integer -> Dungeon -> [Int] -> (Integer, Integer)
traversePath hp dungeon path = (finalHP, gold)
  where
    (finalHP, gold) = traverse2 dungeon path hp 0

traverse2 :: Dungeon -> [Int] -> Integer -> Integer -> (Integer, Integer)
traverse2 EmptyTree _ hp gold = (hp,gold)
traverse2 (Leaf _ []) _ hp gold = (hp, gold)
traverse2 (Leaf _ encounters) [] hp gold = (hp',gold')
  where
    (hp',gold') = executeEncounter encounters hp gold
traverse2 (Node _ [] childs) (x:path) hp gold = traverse2 (childs !! x) path hp gold
traverse2 (Node _ encounters childs) (x:path) hp gold =
  let (hp', gold') = executeEncounter encounters hp gold
      (hp'', gold'') = traverse2 (childs !! x) path hp' gold'
    in (hp'', gold'')


executeEncounter :: [Encounter] -> Integer -> Integer -> (Integer, Integer)
executeEncounter [] hp gold = (hp, gold)
executeEncounter (Fight (Enemy _ damage gold):res) hp accumulatedGold  = executeEncounter res (hp-damage) (accumulatedGold + gold)
executeEncounter (Treasure (Gold goldAmount):res) hp accumulatedGold  = executeEncounter res (hp) (accumulatedGold + goldAmount)
executeEncounter (Treasure (Potion potionAmount):res) hp accumulatedGold  = executeEncounter res (hp+potionAmount) (accumulatedGold)


-- First argument is starting HP
-- Second argument is dungeon map
-- Find which path down the tree yields the most gold for you
-- You cannot turn back, i.e. you'll find a non-branching path
-- You do not need to reach the bottom of the tree
-- Return how much gold you've accumulated
findMaximumGain :: Integer -> Dungeon -> Integer
findMaximumGain hp dungeon = test
  where
  test = fst $ fmgHelper dungeon (0,hp)

fmgHelper :: Dungeon -> (Integer,Integer) -> (Integer,Integer)
fmgHelper EmptyTree (gold,hp) = (gold,hp)
fmgHelper (Leaf _ []) (gold,hp) = (gold,hp)
fmgHelper (Leaf _ encounters) (gold,hp) = modifiedEE encounters gold hp
fmgHelper (Node _ [] childs) (gold,hp) = maxG
  where
    maxG = maximum $ map (\child -> fmgHelper child (gold, hp)) childs
fmgHelper (Node _ encounters childs) (gold,hp) = maxG
  where
    (gold', hp') = modifiedEE encounters gold hp
    maxG = maximum $ map (\child -> fmgHelper child (gold', hp')) childs

modifiedEE :: [Encounter] -> Integer -> Integer -> (Integer,Integer)
modifiedEE [] gold hp = (gold,hp)
modifiedEE (Fight (Enemy _ damage gold):res) accumulatedGold hp
  | hp-damage>0 = modifiedEE res (accumulatedGold + gold) (hp-damage)
  | otherwise = (0,0)
modifiedEE (Treasure (Gold goldAmount):res) accumulatedGold hp = modifiedEE res (accumulatedGold + goldAmount) (hp)
modifiedEE (Treasure (Potion potionAmount):res) accumulatedGold hp = modifiedEE res (accumulatedGold) (hp+potionAmount)


-- First argument is starting HP
-- Second argument is the dungeon map
-- Remove paths that you cannot go thorugh with your starting HP. (By
-- removing nodes from tree).
-- Some internal nodes may become leafs during this process, make the
-- necessary changes in such a case.
findViablePaths :: Integer -> Dungeon -> Dungeon
findViablePaths hp EmptyTree = EmptyTree

findViablePaths hp (Leaf name encounters) =
  let (accumulatedGold, remainingHp) = modifiedEE encounters 0 hp
  in if remainingHp > 0
     then Leaf name encounters
     else EmptyTree

findViablePaths hp (Node name encounters children) =
  let remainingHp = (hp - getEncounterDamage encounters)
      viableChildren = if remainingHp >0 then map (findViablePaths remainingHp) children else []
      nonEmptyViableChildren = filter (notEmpty) viableChildren
  in if null nonEmptyViableChildren
     then if remainingHp >0 then Leaf name encounters else EmptyTree
     else Node name encounters nonEmptyViableChildren

notEmpty :: Dungeon -> Bool
notEmpty EmptyTree = False
notEmpty _ = True

getEncounterDamage :: [Encounter] -> Integer
getEncounterDamage [] = 0
getEncounterDamage (Fight (Enemy _ damage _):xs) = damage + getEncounterDamage xs
getEncounterDamage (Treasure (Potion heal):xs) = (-heal) + getEncounterDamage xs
getEncounterDamage (_:xs) = getEncounterDamage xs



-- First argument is starting HP
-- Second Argument is dungeon map
-- Find, among the viable paths in the tree (so the nodes you cannot
-- visit is already removed) the two most distant nodes, i.e. the two
-- nodes that are furthest awat from each other.
mostDistantPair :: Integer -> Dungeon -> (Integer, Dungeon)
mostDistantPair _ _ = (0, EmptyTree)

-- Find the subtree that has the highest total gold/damage ratio
-- Simply divide the total gold in the subtree by the total damage
-- in the subtree. You only take whole subtrees (i.e you can take a new
-- node as the root of your subtree, but you cannot remove nodes
-- below it). Note that the answer may be the whole tree.
mostEfficientSubtree :: Dungeon -> Dungeon
mostEfficientSubtree EmptyTree = EmptyTree
mostEfficientSubtree dng =
  let maxSofar@(maxDmg, maxGold, maxDungeon) = traverseTree dng 0 0
      (x,y,ddd) = recforMES dng maxSofar
  in ddd

recforMES :: Dungeon -> (Integer, Integer, Dungeon) -> (Integer, Integer, Dungeon)
recforMES EmptyTree m = m 
recforMES dungeon@(Leaf name encounters) maxSofar@(maxDmg, maxGold, maxDungeon) =
  let (curDmg, curGold, curDungeon) =  traverseTree dungeon 0 0
  in  if curDmg <= 0
        then (curDmg, curGold, curDungeon)
      else
        if maxDmg <= 0
          then maxSofar
        else if ((fromInteger curGold)/(fromInteger curDmg) > (fromInteger maxGold)/(fromInteger maxDmg))
                then (curDmg, curGold, curDungeon)
              else maxSofar

recforMES dungeon@(Node name encounters children) maxSofar@(maxDmg, maxGold, maxDungeon) = ans
  where
    curr@(currDmg, currGold, currDungeon) = traverseTree dungeon 0 0
    ans
      | currDmg <= 0 = curr
      | maxDmg <= 0 = maxSofar
      | ((fromInteger currGold)/(fromInteger currDmg) > (fromInteger maxGold)/(fromInteger maxDmg)) = recforMES2 children curr
      | otherwise = recforMES2 children maxSofar

recforMES2 :: [Dungeon] -> (Integer, Integer, Dungeon) -> (Integer, Integer, Dungeon)
recforMES2 [] m = m
recforMES2 (d:ds) maxSofar = 
  let mmm = recforMES d maxSofar
  in recforMES2 ds mmm



execForMES :: [Encounter] -> Integer -> Integer -> (Integer, Integer)
execForMES [] dmg gold = (dmg, gold)
execForMES (Fight (Enemy _ damage gold):res) dmg accumulatedGold  = execForMES res (dmg+damage) (accumulatedGold + gold)
execForMES (Treasure (Gold goldAmount):res) dmg accumulatedGold  = execForMES res (dmg) (accumulatedGold + goldAmount)
execForMES (Treasure (Potion potionAmount):res) dmg accumulatedGold  = execForMES res (dmg-potionAmount) (accumulatedGold)

traverseTree :: Dungeon ->Integer->Integer -> (Integer, Integer, Dungeon)
traverseTree EmptyTree dmg gold = (dmg, gold, EmptyTree)
traverseTree tree@(Leaf name encounters) dmg gold =
  let (dmg',gold') = execForMES encounters dmg gold
  in (dmg', gold', tree)

traverseTree tree@(Node name encounters children) dmg gold =
  let (dmg', gold') = execForMES encounters dmg gold
      (dmg2, gold2) = foldr (\(a,b,_) (x,y)-> (a+x, b+y)) (0,0) $ map (\child -> traverseTree child 0 0) children
      (dmg3, gold3) = (dmg' +dmg2, gold'+gold2)
  in (dmg3, gold3, tree)



