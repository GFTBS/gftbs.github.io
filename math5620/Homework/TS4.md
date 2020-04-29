### Task 1: Write a finite difference code for the elliptic problem(k(x) u′)′=f(x) on [0,1]. Use the Gaussian elimination routine that you developed for your first elliptic solver to solve the resulting linear system of equations. Test your code in the case when the coefficient, k(x), is a constant. This should produce the same results as in your previous tasks.  
  
### Task 2: In class we will see how to perform a computational convergence analysis. Do this on the constant coefficient case where homogeneous Dirichlet conditions are imposed. Note that you will need an exact solution for the problem. If f(x)=x−x2, determine an exact solution for this task.  
  
### Task 3: Repeat the previous task for the case when the coefficient is specified as k(x)=sin(πx).  
  
### Task 4: Use f and homogeneous Dirichlet conditions in this task. Use the array of values provided by your instructor to represent the coefficient function, k(x). This may require that you modify your code to handle an array over a function definition.  
  
### Task 5: Build software manual pages for the elliptic solver codes you have written so far.  
[Software Manual](https://gftbs.github.io/math5620/Software_Manual/toc)  
  
### Task 6: Search the internet for discussions of using finite difference methods to handle a nonconstant coefficient function. That is, find sites for elliptic problems of the form
### (k(x) u′)′=f  
https://hal.inria.fr/hal-01662050/document  
This site described the use of nonconstant coefficient functions in things like flow through an area of uneven material. Cell-centered finite-difference discretization of the Laplace was discussed. The use of this method was to obtain more degrees of freedom and drive consistency.
