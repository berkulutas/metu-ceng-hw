module PE1 where

import Text.Printf

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
getIngredientCost _ [] = error "No such ingredient in list"
getIngredientCost ing@(name, qt) ((Price pname pqt prc):rest)
    | name == pname = getRounded $ (qt * prc) / pqt
    | otherwise     = getIngredientCost ing rest

-- Calculate how much it costs to buy all the ingredients of a recipe
recipeCost :: Recipe -> [Price] -> Double
recipeCost (Recipe _ ingredients) prices =
    getRounded $ foldr ((+) . flip getIngredientCost prices) 0 ingredients

missingAmount :: [(String, Double)] -> (String, Double) -> (String, Double)
missingAmount [] ing  = ing
missingAmount ((sname, sqt):rest) ing@(name, qt)
    | name == sname = (name, getRounded $ qt - sqt)
    | otherwise     = missingAmount rest ing

needed :: (String, Double) -> Bool
needed (_, x) = x > 0

-- Given a list of how much you already have of each ingredient,
-- calculate how much of which ingredients are missing for a recipe
missingIngredients :: Recipe -> [(String, Double)] -> [(String, Double)]
missingIngredients (Recipe _ ingredients) stock =
    filter needed (map (missingAmount stock) ingredients)

cantMake :: Recipe -> [(String, Double)] -> Bool
cantMake recipe stock = not (null (missingIngredients recipe stock))

useIngredient :: (String, Double) -> (String, Double) -> (String, Double)
useIngredient (name1, qt1) (name2, qt2)
    | name1 == name2 = (name1, getRounded $ qt2 - qt1)
    | otherwise      = (name2, qt2)

reduceIngredient :: (String, Double) -> [(String, Double)] -> [(String, Double)]
reduceIngredient ingredient stock = filter needed (map (useIngredient ingredient) stock)

-- Given a list of ingredients in your pantry, calculate what you would
-- have left after making the given recipe. If there isn't enough of an
-- ingredient, the recipe cannot be made! You shouldn't change the amount
-- of ingredient in that case.
makeRecipe :: [(String, Double)] -> Recipe -> [(String, Double)]
makeRecipe stock recipe@(Recipe name ingredients)
    | cantMake recipe stock = stock
    | otherwise             = foldr reduceIngredient stock ingredients

addIngredient :: (String, Double) -> [(String, Double)] -> [(String, Double)]
addIngredient ingredient [] = [ingredient]
addIngredient (name, qt) ((nname, qqt):rest)
    | name == nname = (name, getRounded $ qt + qqt):rest
    | otherwise     = (nname, qqt):(addIngredient (name, qt) rest)

unify :: [(String, Double)] -> [(String, Double)] -> [(String, Double)]
unify = foldr addIngredient

-- Given a list of ingredients you already have, and a list of recipes,
-- make a shopping list showing how much of each ingredient you need
-- to buy, and its cost. Each ingredient mush appear in the shopping list
-- at most once (no duplicates!).
makeShoppingList :: [(String, Double)] -> [Recipe] -> [Price] -> [(String, Double, Double)]
makeShoppingList stock recipes prices =
    map (\(name, qt) -> (name, qt, getIngredientCost (name, qt) prices)) 
        (missingIngredients (foldr (\(Recipe _ ings1) (Recipe _ ings2) -> Recipe "Unified" (unify ings1 ings2))
                                   (Recipe "Unified" [])
                                   recipes)
                            stock)
