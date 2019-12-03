#### Task 1: Determine if there might be an advantage to using one of the hybrid methods for root finding for the problem defined in Task 7 on Tasksheet 3. Justify your answer with results from your codes.  
The hybrid methods give Newton's Method and Secant method good starting points. With Secant method if the starting point is too far away from the root the answer is useless.  
output of [TS4Demo](https://gftbs.github.io/src/TS4Demo.cpp):  

    mixed Secant method of x cosh(x)+x^3=pi starting range [0,20]
    expected value: 1.09633
    calculated: 1.09038

    Secant method of x cosh(x)+x^3=pi starting range [0,20]
    expected value: 1.09633
    calculated: -1.16615


  
  
#### Task 2: Develop codes to compute the length of a vector of arbitrary length using the 1-norm, 2-norm, and infinity norm. Add the object modules to your shared library and create three pages to put in your software manual.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS4Demo](https://gftbs.github.io/src/TS4Demo.cpp):  

    one, two, and infinity norm of <1,2,3,4,5,6,7,8,9,10>: 55, 19.6214, 10

#### Task 3: Develop codes that compute the absolute and relative error in using one vector x as an approximation of another vector,x∗. Create these routines for the 1-norm, 2-norm, and infinity norm. Make sure you add these routines to your shared library and create software manual pages for all 6 codes.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS4Demo](https://gftbs.github.io/src/TS4Demo.cpp): 

    relative error, absolute error with one, two, and infinity norm of <0,2,3,4,5,6,7,8,9,10>
    approximate of <1,2,3,4,5,6,7,8,9,10>: 0.0185185, 1, 0.0185185, 1, 0, 0

#### Task 4: Write codes that return (1) the sum of two vectore, (2) difference of two vectors, and (3) a scalar multiple of a vector.  

[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS4Demo](https://gftbs.github.io/src/TS4Demo.cpp): 

    v1+v2, v1-v2, v1*1.32 with v2 = <0,2,3,4,5,6,7,8,9,10>, v1 = <1,2,3,4,5,6,7,8,9,10>:
    <1,4,6,8,10,12,14,16,18,20,>, <1,0,0,0,0,0,0,0,0,0,>, <1.32,2.64,3.96,5.28,6.6,7.92,9.24,10.56,11.88,13.2,>  
#### Task 5: Wrte a code that implements a "SAXPY" operation involing input of a couple of vectors and a scalar. Do an internet search to find out what a SAXPY operation. Add the routine to your shared library and the software manual.  

#### Task 6: Write codes to implement (1) the dot product of two vectors and (2) the cross product of two vectors. As usual, add these to your shared library and software manual.  

[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS4Demo](https://gftbs.github.io/src/TS4Demo.cpp): 

    Dot Product and cross product of <1,1,0> , <0,1,1>: 1, <1,-1,1,>
#### Task 7: Create a routine that will return the output from multiplying a matrix into a vector from the left. Do this for a general rectangular matrix, A. That is, y=Ax  

#### Task 8: Download and use the "Hello World" handout that uses OpenMP to do a single print of a string for each processor your computer has. Report how many processors your laptop or desktop has.  

#### Task 9: Use OpenMP to try to speed up the matrix-vector multiplication using more than one processor.  

#### Task 10: Search the internet for sites that document optimization flags on compilers that you might use. For example, look for pages that talk about optimization flags on gcc or gfortran. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.  

