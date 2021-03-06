﻿# Task Sheet 2
#### Task 1: Consider the nonlinear equation x cosh(x)+x^3=π. Set up a root finding problem for this equation.  
Find x such that  
x cosh(x)+x^3-π=0
x<sub>n</sub><sup>3</sup> = π - x<sub>n+1</sub>cosh(x<sub>n+1</sub>)
#### Task 2: Consider the nonlinear equation x cosh(x)+x^3=π. Set up at least two associated fixed point iteration for this equation.  
###### For fixed point iteration  
x<sub>n</sub><sup>3</sup> = π - x<sub>n+1</sub>cosh(x<sub>n+1</sub>)  
at x<sub>n</sub> = 0, x<sub>n+1</sub> = -1.42655  
at x<sub>n</sub> = -1.42655, x<sub>n+1</sub> = -1.85182  

because the second iteration had a smaller difference between x<sub>n</sub> and x<sub>n+1</sub> i believe this has the possibility to converge  

###### For Bisection
on the interval \[0,2\] the values are \[-pi,12.382\]  
Next the intermediate value of 1 would be tried and found to be -0.5985120187745494  
because it is negative it will replace the negative number and the new interval will be \[1,2\]  
#### Task 3: Write code that implements fixed point iteration for the equation defined in the previous two tasks.  
output of [TS2Demo](https://gftbs.github.io/src/TS2Demo.cpp):  

        fixed point iteration of x cosh(x)+x^3=pi
        expected value: 1.09633
        calculated: 1.09633

[Bisection](https://gftbs.github.io/Software_Manual/procedures/bisectionRoot)  
[Fixed Point Iteration](https://gftbs.github.io/Software_Manual/procedures/fixedPointIteration)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 4: Write a code that computes the roots of a function of one variable using the Bisection method.  
output of [TS2Demo](https://gftbs.github.io/src/TS2Demo.cpp):  

        Bisection of x cosh(x)+x^3=pi
        expected value: 1.09633
        calculated: 1.09633

[Bisection](https://gftbs.github.io/Software_Manual/procedures/bisectionRoot)  
[Fixed Point Iteration](https://gftbs.github.io/Software_Manual/procedures/fixedPointIteration)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 5: Add single Precision and Double precision to the Software Manual.  
[Single Precision Test](https://gftbs.github.io/Software_Manual/procedures/singlePrecision)    
[Double Precision Test](https://gftbs.github.io/Software_Manual/procedures/doublePrecision)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 6: Add relative Error and Absolute error to the Software Manual.  
[Absolute Error](https://gftbs.github.io/Software_Manual/procedures/absoluteError)    
[Relative Error](https://gftbs.github.io/Software_Manual/procedures/relError)    
[Manual](https://gftbs.github.io/Software_Manual/toc)   

#### Task 7: Add Functional Iteration to the Software Manual.  

[Bisection](https://gftbs.github.io/Software_Manual/procedures/bisectionRoot)  
[Fixed Point Iteration](https://gftbs.github.io/Software_Manual/procedures/fixedPointIteration)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 8: Repeat Task 7 for the Bisection method.  

[Bisection](https://gftbs.github.io/Software_Manual/procedures/bisectionRoot)  
[Fixed Point Iteration](https://gftbs.github.io/Software_Manual/procedures/fixedPointIteration)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 9: Compare the results from functional iteration and Bisection on the problems in Tasksheet 2, Task 1 and Task2.  
both routines obtained at least 5 decimal values of accuracy. However, Bisection did it in 18 iterations where fixed point took around 65 iterations.
#### Task 10: Search the internet for sites that discuss functional iteration for root finding.  
http://monthadar.blogspot.com/2010/01/fixed-point-iteration.html  
This site discusses how fixed point iteration typically converges faster, but is harder to set up. Sometimes convergence is slower than bisection method, especially when an initial guess is too far away. The major drawback to FPI is that an incorrect setup will yield no convergence.  
