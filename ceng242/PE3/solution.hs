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
    show (Power n) = "x^" ++ show n

instance Eq Power where
    (Power m) == (Power n) = m == n

instance Ord Power where
    (Power m) <= (Power n) = m <= n

instance Evaluable Power where
    function (Power n) = \x -> fromInteger (x^n)

instance Differentiable Power where
    derivative (Power 0) = [Const 0]
    derivative (Power 1) = [Const 1]
    derivative (Power n) = [Pw n (Power (n-1))]



-- INSTANCES FOR POLYNOMIAL

showPair (coef, (Power 0)) = show coef
showPair (1, power) = show power
showPair (-1, power) = '-':(show power)
showPair (coef, power) = show coef ++ show power

instance Show Polynomial where
    show (Polynomial [polyPair]) = showPair polyPair
    show (Polynomial (polyPair:rest)) = showPair polyPair ++ " + " ++ show (Polynomial rest)

instance Evaluable Polynomial where
    function (Polynomial terms) = \x -> fromInteger (sum (map (\y -> y x) (map fPair terms)))
        where fPair (m, (Power n)) = \x -> m * (x^n)

instance Differentiable Polynomial where
    derivative (Polynomial []) = []
    derivative (Polynomial ((m, Power 0):rest)) = derivative (Polynomial rest)
    derivative (Polynomial ((m, Power 1):rest)) = (Const m):(derivative (Polynomial rest))
    derivative (Polynomial ((m, Power n):rest)) = (Pw (m*n) (Power (n-1))):(derivative (Polynomial rest))




-- INSTANCES FOR TRIGONOMETRIC

polyParens poly@(Polynomial [(m, Power 0)])
    | m < 0     = "(" ++ show poly ++ ")"
    | otherwise = show poly
polyParens poly@(Polynomial [(m, Power 1)])
    | m < 0     = "(" ++ show poly ++ ")"
    | otherwise = show poly
polyParens poly = "(" ++ show poly ++ ")"

instance Show Trigonometric where
    show (Sin poly) = "sin" ++ polyParens poly
    show (Cos poly) = "cos" ++ polyParens poly

instance Evaluable Trigonometric where
    function (Sin poly) = getRounded . sin . (function poly)
    function (Cos poly) = getRounded . cos . (function poly)

instance Differentiable Trigonometric where
    derivative (Sin (Polynomial [(_, Power 0)])) = [Const 0]
    derivative (Sin poly) = result
        where derivatives = derivative poly
              makeCosTerms (Const m) = Trig m (Power 0) (Cos poly)
              makeCosTerms (Pw m power) = Trig m power (Cos poly)
              result = map makeCosTerms derivatives
    derivative (Cos poly) = result
        where derivatives = derivative poly
              makeSinTerms (Const m) = Trig (-m) (Power 0) (Sin poly)
              makeSinTerms (Pw m power) = Trig (-m) power (Sin poly)
              result = map makeSinTerms derivatives




-- INSTANCES FOR EXPONENTIAL

instance Show Exponential where
    show (Exponential (Polynomial [(1, Power 0)])) = "e"
    show (Exponential poly) = "e^" ++ polyParens poly

instance Evaluable Exponential where
    function (Exponential poly) = getRounded . exp . (function poly)

instance Differentiable Exponential where
    derivative (Exponential (Polynomial [(_, Power 0)])) = [Const 0]
    derivative orig@(Exponential poly) = result
        where derivatives = derivative poly
              makeExpTerm (Const m) = Exp m (Power 0) orig
              makeExpTerm (Pw m power) = Exp m power orig
              result = map makeExpTerm derivatives



-- INSTANCES FOR TERM

instance Show Term where
    show (Const n) = show n
    show (Pw m (Power 0)) = show m
    show (Pw m power) = show m ++ show power
    show (Trig 1 (Power 0) trig) = show trig
    show (Trig m (Power 0) trig) = show m ++ show trig
    show (Trig m power trig) = show m ++ show power ++ show trig
    show (Exp 1 (Power 0) exp) = show exp
    show (Exp m (Power 0) exp) = show m ++ show exp
    show (Exp m power exp) = show m ++ show power ++ show exp

instance Evaluable Term where
    function (Const m) = \x -> fromInteger m
    function (Pw m power) = \x -> getRounded (fromInteger m * function power x)
    function (Trig m power trig) = \x -> getRounded (fromInteger m * function power x * function trig x)
    function (Exp m power exp) = \x -> getRounded (fromInteger m * function power x * function exp x)

multiply m power (Const x) = Pw (m*x) power
multiply m (Power n) (Pw x (Power y)) = Pw (m*x) (Power (n+y))
multiply m (Power n) (Trig x (Power y) trig) = Trig (m*x) (Power (n+y)) trig
multiply m (Power n) (Exp x (Power y) exp) = Exp (m*x) (Power (n+y)) exp

instance Differentiable Term where
    derivative (Const _) = [Const 0]
    derivative (Pw _ (Power 0)) = [Const 0]
    derivative (Pw m (Power n)) = [Pw (m*n) (Power (n-1))]
    derivative (Trig m (Power n) trig) = result
        where derivatives = derivative trig
              productDerivative1 = Trig (m*n) (Power (n-1)) trig
              productDerivative2 = map (multiply m (Power n)) derivatives
              result = if n > 0 then productDerivative1:productDerivative2 else productDerivative2
    derivative (Exp m (Power n) exp) = result
        where derivatives = derivative exp
              productDerivative1 = Exp (m*n) (Power (n-1)) exp
              productDerivative2 = map(multiply m (Power n)) derivatives
              result = if n > 0 then productDerivative1:productDerivative2 else productDerivative2



-- INSTANCES FOR [TERM]

instance Evaluable [Term] where
    function [] = \x -> 0.0
    function terms = \x -> getRounded (sum (map (\f -> f x) (map function terms)))

deduplicate = foldr merge []

merge term [] = [term]
merge (Const x) ((Const y):rest) = (Const (x+y)):rest
merge term@(Pw m (Power n)) ((Pw p (Power q)):rest)
    | n == q    = (Pw (m+p) (Power n)):rest
    | otherwise = (Pw p (Power q)):(merge term rest)
merge term@(Trig m (Power n) (Sin (Polynomial pows))) ((Trig p (Power q) (Sin (Polynomial lpows))):rest)
    | n == q && pows == lpows = (Trig (m+p) (Power n) (Sin (Polynomial pows))):rest
    | otherwise               = (Trig p (Power q) (Sin (Polynomial lpows))):(merge term rest)
merge term@(Trig m (Power n) (Cos (Polynomial pows))) ((Trig p (Power q) (Cos (Polynomial lpows))):rest)
    | n == q && pows == lpows = (Trig (m+p) (Power n) ((Cos (Polynomial pows))):rest)
    | otherwise               = (Trig p (Power q) (Cos (Polynomial lpows))):(merge term rest)
merge term@(Exp m (Power n) (Exponential (Polynomial pows))) ((Exp p (Power q) (Exponential (Polynomial lpows))):rest)
    | n == q && pows == lpows = (Exp (m+p) (Power n) (Exponential (Polynomial pows))):rest
    | otherwise               = (Exp p (Power q) (Exponential (Polynomial lpows))):(merge term rest)
merge term (x:xs) = x:(merge term xs)

instance Differentiable [Term] where
    derivative [] = []
    derivative terms = deduplicate (foldr (++) [] (map derivative terms))
