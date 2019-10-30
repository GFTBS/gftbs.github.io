# Task Sheet 2
#### Task 1: Consider the nonlinear equation x cosh(x)+x^3=π. Set up a root finding problem for this equation.  
Find x such that  
x cosh(x)+x^3-π=0

#### Task 2: Consider the nonlinear equation x cosh(x)+x^3=π. Set up at least two associated fixed point iteration for this equation.  
###### For fixed point iteration  
x<sub>n</sub>^3 = π - x<sub>n-1</sub>cosh(x<sub>n+1</sub>)
###### For Bisection
on the interval \[0,2\] the values are \[-pi,12.382\]  
Next the intermediate value of 1 would be tried and found to be -0.5985120187745494  
because it is negative it will replace the negative number and the new interval will be \[1,2\]  
#### Task 3: Write code that implements fixed point iteration for the equation defined in the previous two tasks.   

#### Task 4: Write a code that computes the roots of a function of one variable using the Bisection method.  

#### Task 5: Add single Precision and Double precision to the Software Manual.  
[Single Precision Test](https://gftbs.github.io/Software_Manual/procedures/singlePrecision)    
[Double Precision Test](https://gftbs.github.io/Software_Manual/procedures/doublePrecision)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  

#### Task 6: Add relative Error and Absolute error to the Software Manual.  
[Absolute Error](https://gftbs.github.io/Software_Manual/procedures/absoluteError)    
[Relative Error](https://gftbs.github.io/Software_Manual/procedures/relError)    
[Manual](https://gftbs.github.io/Software_Manual/toc)   

#### Task 7: Add Functional Iteration to the Software Manual.  

#### Task 8: Repeat Task 7 for the Bisection method.  

#### Task 9: Compare the results from functional iteration and Bisection on the problems in Tasksheet 2, Task 1 and Task2.  

#### Task 10: Search the internet for sites that discuss functional iteration for root finding.
