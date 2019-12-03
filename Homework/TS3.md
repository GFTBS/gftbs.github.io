# Tasksheet 3  
#### Task 1: Implement a version of Newton's method for finding the roots of a function of one variable. Document the code in your software manual.  
[Manual](https://gftbs.github.io/Software_Manual/toc)   
#### Task 2: Implement a version of the secant method for finding the roots of a function of one variable. Create a page in your software manual to document the code.  
[Manual](https://gftbs.github.io/Software_Manual/toc)   
#### Task 3: Compare the 4 methods for root finding (functional iteration, bisection, Newton's method, and the secant method using the problems defined in the first two tasks of Task sheet #2.  
output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp):

        Newtons method of x cosh(x)+x^3=pi
        expected value: 1.09633
        calculated: 1.09633

        Secant method of x cosh(x)+x^3=pi
        expected value: 1.09633
        calculated: 1.09306  
From observations Secant method worked the fastest but had the greatest error. Newtons method had similar error to fixed point iteration and bisection but worked much faster. 


#### Task 4: Develop and implement a hybrid method for approximate solution of root finding problems in one variable. Use the bisection method to start the algorithm and switch to Newton's method when the iterates are close enough. Create a page in your software manual for this code.  
output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp): 

        mixed newton's method of x cosh(x)+x^3=pi starting range [0,20]
        expected value: 1.09633
        calculated: 1.09633

[Manual](https://gftbs.github.io/Software_Manual/toc)   

#### Task 5: Repeat the development in Task 4, but replace Newton's method with the secant method. Create a page in your software manual for this code. 
output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp):  

        mixed Secant method of x cosh(x)+x^3=pi starting range [0,20]
        expected value: 1.09633
        calculated: 1.09038
        
[Manual](https://gftbs.github.io/Software_Manual/toc)   

#### Task 6: Add the routines created thus far to your shared library. There should be 8 to 10 routines so far in the course.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
#### Task 7: In some cases it is necessary to find a number of roots for a function of one variable. Suppose that we know there are several roots in a given interval. Develop code that will break the interval into subintervals and apply the Bisection method to each subinterval. Apply this to the following function  
f(x)=sin(πx2+3.7) Use the interval [1.1,68.3].  
output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp):  

        5 bisection roots of f(x)=sin(pi*x*2+3.7): 1.41113 1.91113 2.41113 2.91113 3.41113

#### Task 8: Repeat the work from Task 7 using Newton's method.  

output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp):  

        5 Newton's roots of f(x)=sin(pi*x*2+3.7): 1.91113 2.41113 2.91113 3.41113 3.91113  
        
#### Task 9: Repeat the work from Task 7. using the secant method.  

output of [TS3Demo](https://gftbs.github.io/src/TS3Demo.cpp):  

        5 Secant roots of f(x)=sin(pi*x*2+3.7): 1.41113 1.91113 2.41113 2.91113 3.41113
#### Task 10: Search the internet for sites that identify real problems where some root finding problem is used to compute approximate solutions. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.  
