{-# LANGUAGE FlexibleInstances #-}

module PE3 where

import Data.List (sort, sortBy)
import Text.Printf (printf)

data Term = Const Integer | Pw Integer Power | Trig Integer Power Trigonometric | Exp Integer Power Exponential

data Power = Power Integer
data Polynomial = Polynomial [(Integer, Power)]
data Exponential = Exponential Polynomial
data Trigonometric = Sin Polynomial | Cos Polynomial

class Evaluable a where
    function :: a -> (Integer -> Double)

class Differentiable a where
    derivative :: a -> [Term]

-- You can use this as is
getRounded :: Double -> Double 
getRounded x = read s :: Double
               where s = printf "%.2f" x

-- You don't have to follow the order the functions appear in the file
-- For example, you could first define all Show instances, then all Eq instances etc.
-- if that implementation order is more convenient for you.



-- INSTANCES FOR POWER

instance Show Power where
    show (Power 0) = "1"
    show (Power 1) = "x"
    show (Power i) = printf "x^%d" i 

instance Eq Power where
    (Power x) == (Power y) = x == y

instance Ord Power where
    (Power x) <= (Power y) = x <= y

instance Evaluable Power where
    function (Power p) = \x -> getRounded(fromInteger (toInteger x)^p )

instance Differentiable Power where
  derivative (Power 0) = [Const 0]
  derivative (Power 1) = [Const 1]
  derivative (Power n) = [Pw n (Power (n - 1))]



-- INSTANCES FOR POLYNOMIAL

instance Show Polynomial where 
    show (Polynomial lst) = 
        case filtered of 
            [] -> "0"
            _ -> printit glued
        where 
            filtered = filter (\(x,_) -> x/= 0) lst
            glued = map (\(x, y) -> (glue1 x y) ++ (glue2 x y)) filtered
            
            glue1 x y | show x == "1" && show y/= "1" = ""
                    | show x == "-1" && show y/= "1" = "-"
                    | otherwise = show x

            glue2 x y | show y == "1" = "" 
                    | otherwise  = show y            
            

            printit [x] = printf x
            printit (x:xs) = printf x ++ " + " ++ printit xs

instance Evaluable Polynomial where
    function (Polynomial []) = \_ -> getRounded(0.0)
    function (Polynomial ((a,Power b):xs)) = \x -> getRounded ((fromInteger a)*(function (Power b) x) + (function (Polynomial xs) x))


instance Differentiable Polynomial where
    derivative (Polynomial p) = if null lasttry then [Const 0] else lasttry
        where
            yderived = map (\(x,y)-> (x, (derivative y))) p
            multiplied = map (\(x,y)-> (map (\k -> mult x k)  y)) yderived
            mult x (Const y) =  Const (x*y)
            mult x (Pw y1 y2) = Pw (x*y1) y2
            filterout (Const 0) = False
            filterout _ = True
            lasttry = filter (\x-> filterout x) $ concat  multiplied

instance Eq Polynomial where
  (Polynomial p1) == (Polynomial p2) = sort p1 == sort p2

instance Ord Polynomial where
    (Polynomial p1) <= (Polynomial p2) = res 
        where 
            (p1i, Power p1p):p1res = p1
            (p2i, Power p2p):p2res = p2
            res = ((p1p, p1i) <= (p2p, p2i)) && (p1res <= p2res)




-- INSTANCES FOR TRIGONOMETRIC

instance Show Trigonometric where
  show (Sin (Polynomial [])) = "0"
  show (Sin poly@(Polynomial ((i, Power p):ts))) = "sin" ++ polyStr 
    where
      polyStr = if length ts > 0 || p > 1
                  then "(" ++ show poly ++ ")"
                  else if i < 0 then "(" ++ show poly ++ ")" else show poly
  show (Cos (Polynomial [])) = "1"
  show (Cos poly@(Polynomial ((i, Power p):ts))) = "cos" ++ polyStr
    where
      polyStr = if length ts > 0 || p > 1
                  then "(" ++ show poly ++ ")"
                  else if i < 0 then "(" ++ show poly ++ ")" else show poly

instance Evaluable Trigonometric where
  function (Sin p) = \x -> getRounded $ sin (function p x)
  function (Cos p) = \x -> getRounded $ cos (function p x)

instance Differentiable Trigonometric where
    derivative (Sin p) = merged 
        where
            derivedPoly = derivative p
            merged = map (\x-> merge (Cos p) x) derivedPoly
            merge t (Const 0) = Const 0
            merge t (Const i) = (Trig i (Power 0) t)
            merge t (Pw pi pp) = Trig pi pp t
    derivative (Cos p) = merged 
        where
            derivedPoly = derivative p
            merged = map (\x-> merge (Sin p) x) derivedPoly
            merge t (Const 0) = Const 0
            merge t (Const i) = (Trig (-i) (Power 0) t)
            merge t (Pw pi pp) = Trig (-pi) pp t 

instance Eq Trigonometric where
  (Sin p1) == (Sin p2) = p1 == p2
  (Cos p1) == (Cos p2) = p1 == p2
  _ == _ = False




-- INSTANCES FOR EXPONENTIAL

instance Show Exponential where
  show (Exponential (Polynomial [])) = "1"
  show (Exponential poly@(Polynomial ((i, Power p):ts))) = "e^" ++ polyStr
    where
      polyStr = if length ts > 0 || p > 1
                  then "(" ++ show poly ++ ")"
                  else if i < 0 then "(" ++ show poly ++ ")" else show poly

instance Evaluable Exponential where
    function (Exponential p) = \x -> getRounded (exp (function p x))

instance Differentiable Exponential where
    derivative expon@(Exponential p) = merged
        where
            derivedPoly = derivative p
            merged = map (\x-> merge expon x) derivedPoly
            merge e (Const 0) = (Const 0)
            merge e (Const i) = (Exp i (Power 0) e)
            merge e (Pw pi pp) = (Exp pi pp e)

instance Eq Exponential where
  (Exponential p1) == (Exponential p2) = p1 == p2


-- INSTANCES FOR TERM

instance Show Term where
    show (Const 0 ) = "0" -- ???? or ""
    show (Const i) = show i
    show (Pw 0 _) =  "0"  -- ???? or ""
    show (Pw 1 p) = show p
    show (Pw (-1) p) = "-" ++ show p 
    show (Pw i p) = show i ++ (if show p == "1" then "" else show p)
    show (Exp 0 _ _) = "0"
    -- show (Exp 1 p e) = (if show (Pw 1 p) == "1" then "" else show (Pw 1 p))
    show (Exp i p e) = (if show (Pw i p) == "1" then "" else if show (Pw i p) == "-1" then "-" else show (Pw i p))  ++ show e 
    show (Trig 0 p t) = "0"
    show (Trig i p t) 
                     | show t == "0" = "0" 
                     | show t == "1" = show (Pw i p)
                     | otherwise =  (if show (Pw i p) == "1" then "" else if show (Pw i p) == "-1" then "-" else  show (Pw i p)) ++ show t 


instance Evaluable Term where
    function (Const i) = \x -> getRounded(fromInteger i) -- ???? const i eval gelir mi ?
    function (Pw i p) = \x -> getRounded((fromInteger i) * (function p x))
    function (Exp i p (Exponential t)) = \x -> getRounded((function (Pw i p) x) * (exp (function t x)))
    function (Trig i p (Sin t)) = \x -> getRounded((function (Pw i p) x)  * (sin (function t x)))  
    function (Trig i p (Cos t)) = \x -> getRounded((function (Pw i p) x)  * (cos (function t x)))  
 


instance Differentiable Term where
    derivative (Const _) = [Const 0]
    derivative (Pw 0 (Power _)) = [Const 0]
    derivative (Pw i (Power 0)) = [Const 0]
    derivative (Pw i (Power 1)) = [Const i]
    derivative (Pw i (Power p)) = [Pw (i*p) (Power (p-1))]
    derivative (Exp i p e) = a ++ b
        where 
            firstt = (Pw i p)
            secondd = (e)
            derivfirst = derivative firstt
            derivsecond = derivative secondd
            multx [(Pw i (Power p))] e = [(Exp i (Power p) e)]
            multx [(Const 0)] _ = [] -- edge case var dikkat et 0 lari filter edip cikarmak gerek
            multx [(Const i)] e = [(Exp i (Power 0) e )]
            multy (Pw i (Power p)) [Const 0] = []                                                                                                                                                                                                                                                                                                                                                             
            multy (Pw i (Power p)) lst = map (\(Exp ei (Power ep) e) -> (Exp (i*ei) (Power (p+ep)) e)) lst
            a = multx derivfirst secondd
            b = multy firstt derivsecond
    derivative (Trig i p (Sin sp)) = a ++ b
        where 
            firstt = (Pw i p)
            secondd = (Sin sp)
            derivfirst = derivative firstt
            derivsecond = derivative secondd
            multx [(Pw i (Power p))] (Sin sp) = [(Trig i (Power p) (Sin sp))]
            multx [(Const 0)] _ = [] -- edge case var dikkat et 0 lari filter edip cikarmak gerek
            multx [(Const i)] s = [(Trig i (Power 0) s )]
            multy (Pw i (Power p)) [Const 0] = []
            multy (Pw i (Power p)) lst = map (\(Trig ci (Power cp) cc) -> (Trig (i*ci) (Power (p+cp)) cc)) lst
            a = multx derivfirst secondd
            b = multy firstt derivsecond
    derivative (Trig i p (Cos sp)) = a ++ b
        where 
            firstt = (Pw i p)
            secondd = (Cos sp)
            derivfirst = derivative firstt
            derivsecond = derivative secondd
            multx [(Pw i (Power p))] (Cos sp) = [(Trig i (Power p) (Cos sp))]
            multx [(Const 0)] _ = [Const 0] -- edge case var dikkat et 0 lari filter edip cikarmak gerek
            multx [(Const i)] s = [(Trig i (Power 0) s )]
            multy (Pw i (Power p)) [Const 0] = [] 
            multy (Pw i (Power p)) lst = map (\(Trig ci (Power cp) cc) -> (Trig (i*ci) (Power (p+cp)) cc)) lst
            a = multx derivfirst secondd
            b = multy firstt derivsecond

instance Eq Term where
  (Const a) == (Const b) = a == b
  (Pw a (Power b)) == (Pw a' (Power b')) = a == a' && b == b'
  (Trig a (Power b) (Sin (Polynomial c))) == (Trig a' (Power b') (Sin (Polynomial c'))) =
    a == a' && b == b' && c == c'
  (Trig a (Power b) (Cos (Polynomial c))) == (Trig a' (Power b') (Cos (Polynomial c'))) =
    a == a' && b == b' && c == c'
  (Exp a (Power b) (Exponential (Polynomial c))) == (Exp a' (Power b') (Exponential (Polynomial c'))) =
    a == a' && b == b' && c == c'
  _ == _ = False

instance Ord Term where
  compare (Const x) (Const y) = compare x y
  compare (Pw x1 (Power y1)) (Pw x2 (Power y2)) = compare (y1,x1)  (y2, x2)
  compare (Trig x1 (Power y1) (Sin tp1)) (Trig x2 (Power y2) (Sin tp2)) = compare (tp1, y1, x1) (tp2, y2, x2)
  compare (Trig x1 (Power y1) (Cos tp1)) (Trig x2 (Power y2) (Cos tp2)) = compare (tp1, y1, x1) (tp2, y2, x2)

  compare (Exp x1 (Power y1) (Exponential ep1)) (Exp x2 (Power y2) (Exponential ep2)) = compare (ep1, y1, x1) (ep2, y2, x2)

  compare (Const _) _ = LT
  compare _ (Const _) = GT
  compare (Pw _ _) _ = LT
  compare _ (Pw _ _) = GT
  compare (Trig _ _ _ ) _ = LT
  compare _ (Trig _ _ _) = GT


-- INSTANCES FOR [TERM]

instance Evaluable [Term] where
    function lst= \x -> getRounded(sum (map (\t -> (function t x)) lst))

instance Differentiable [Term] where
    derivative lst =  filter (\x -> ff x) $ combineTerms $ sort derivedl -- added reverse to pass last case
        where
            ff (Const 0) = False
            ff _ = True
            derivedl = concat $ map (\t -> derivative t ) lst
 

combineTerms :: [Term] -> [Term]
combineTerms [] = []
combineTerms [t] = [t]
combineTerms (t1@(Const c1) : t2@(Const c2) : ts) = combineTerms $ (Const (c1 + c2)) : ts
combineTerms (t1@(Pw c1 p1) : t2@(Pw c2 p2) : ts) =
  if p1 == p2
  then combineTerms $ (Pw (c1 + c2) p1) : ts
  else t1 : combineTerms (t2 : ts)
combineTerms (t1@(Trig c1 p1 trig1) : t2@(Trig c2 p2 trig2) : ts) =
  if (p1 == p2) && (trig1 == trig2)
  then combineTerms $ (Trig (c1 + c2) p1 trig1) : ts
  else t1 : combineTerms (t2 : ts)
combineTerms (t1@(Exp c1 p1 exp1) : t2@(Exp c2 p2 exp2) : ts) =
  if (p1 == p2) && (exp1 == exp2)
  then let combinedCoeff = c1 + c2
        in combineTerms $ (Exp combinedCoeff p1 exp1) : ts
  else t1 : combineTerms (t2 : ts)
combineTerms (t:ts) = t : combineTerms ts

