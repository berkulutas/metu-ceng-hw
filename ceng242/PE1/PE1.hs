module PE1 where

import Text.Printf

-- PE1: Recipe Calculator
-- The premise of this homework if to write a recipe calculator that
-- calculates: how much a recipe costs to make, what can be made with the
-- ingredients already available, and how much extra ingredients need to
-- be bought in order to make a recipe.

-- Recipe = Recipe Name [(Ingredient, Quantity)]
data Recipe = Recipe String [(String, Double)] deriving Show

-- Price = Price Ingredient Quantity Price
data Price = Price String Double Double deriving Show

-- You can use this as-is
getRounded :: Double -> Double 
getRounded x = read s :: Double
              where s = printf "%.2f" x

-- Calculate how much the given amount of the given ingredient costs
getIngredientCost :: (String, Double) -> [Price] -> Double
getIngredientCost ing@(name, quan) prices@(Price pname pquan price:ps) = 
        if name == pname
            then getRounded(quan*price/pquan)
        else getIngredientCost ing ps

-- Calculate how much it costs to buy all the ingredients of a recipe
recipeCost :: Recipe -> [Price] -> Double
recipeCost (Recipe _ ings) prices = getRounded $ sum $ map (\ing -> getIngredientCost ing prices) ings--ssum2
    -- where 
    --     ssum = sum $ map (\ing -> getIngredientCost ing prices) ings
    --     ssum2 = getRounded(ssum)

-- Given a list of how much you already have of each ingredient,
-- calculate how much of which ingredients are missing for a recipe
missingIngredients :: Recipe -> [(String, Double)] -> [(String, Double)]
missingIngredients (Recipe _ ings) stock = filter (\(_, quan) -> quan >0) $ map (\ing -> isMissing ing stock) ings

missingss :: [(String, Double)] -> [(String, Double)] -> [(String, Double)] 
missingss ings stock =  filter (\(_, quan) -> quan >0) $ map (\ing -> isMissing ing stock) ings

isMissing :: (String, Double) -> [(String, Double)] -> (String, Double)
isMissing ing@(name, quan) stock = 
    let stockItem = filter (\(sname, _) -> sname == name) stock
    in case stockItem of
        [] -> (name, getRounded(quan))
        (sname, squan):_ -> if squan >= quan
                            then ("", 0)
                            else (name, getRounded(quan - squan))


-- Given a list of ingredients in your kitchen, calculate what you would
-- have left after making the given recipe. If there isn't enough of an
-- ingredient, the recipe cannot be made! You shouldn't change the amount
-- of ingredient in that case.
makeRecipe :: [(String, Double)] -> Recipe -> [(String, Double)]
makeRecipe stock recipe@(Recipe _ ings) = if missingIngredients recipe stock == [] 
                                    then makeIt stock ings
                                    else filter (\(_, quan) -> quan > 0) $ map (\(name, quan) -> (name,getRounded quan)) stock


makeIt :: [(String, Double)] -> [(String, Double)] -> [(String, Double)]
makeIt stock ings = filter (\(_, quan) -> quan >0) $ map (\sing -> makeItHelp sing ings) stock
                    
makeItHelp :: (String, Double) -> [(String, Double)] -> (String, Double)
makeItHelp (sname, squan) ings = 
  let ingItem = filter (\(iname, _)->iname == sname) ings
  in case ingItem of
    []->(sname, getRounded squan)
    (iname, iquan):_->(sname, getRounded(squan - iquan))
    -- where (sname, squan) = head $ filter (\(sname, _) -> sname == name) stock

-- Given a list of ingredients you already have, and a list of recipes,
-- make a shopping list showing how much of each ingredient you need
-- to buy, and its cost. Each ingredient mush appear in the shopping list
-- at most once (no duplicates!).
makeShoppingList :: [(String, Double)] -> [Recipe] -> [Price] -> [(String, Double, Double)]
makeShoppingList stock recipes prices = needwprice
    where
        flatted = flatit recipes
        mergd = mergeDuplicates flatted
        neeed = missingss mergd stock
        needprice = map (\ing -> getIngredientCost ing prices) neeed
        needwprice = [(a,b,c) | ((a,b),c) <- zip neeed needprice]

flatit lst = concat $ map (\(Recipe _ ings)->ings) lst
mergeDuplicates :: [(String, Double)] -> [(String, Double)]
mergeDuplicates [] = []
mergeDuplicates ((name, amount):xs) = combine name amount (mergeDuplicates xs)

combine :: String -> Double -> [(String, Double)] -> [(String, Double)]
combine name amount [] = [(name, amount)]
combine name amount ((n,a):ys) 
    | name == n = (name, getRounded(a+amount)) : ys
    | otherwise = (n,a) : combine name amount ys

