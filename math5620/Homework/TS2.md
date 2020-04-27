# Task Sheet 2:  
#### Task 1: Build a code that will initialize the tridiagonal matrix for the simple elliptic ordinary differential equation in the textbook. Use the array storage version of the matrix storage. Also implement the code that initializes the right hand side vector. Make the code reusable  

Output from [TS2Demo](https://gftbs.github.io/math5620/src/TS2Demo.cpp)

    Tri diagonal Matrix 2, -1, 1 size = size of rhs

    [ 2 -1 0 0 0 0 ]
    [ -1 2 -1 0 0 0 ]
    [ 0 -1 2 -1 0 0 ]
    [ 0 0 -1 2 -1 0 ]
    [ 0 0 0 -1 2 -1 ]
    [ 0 0 0 0 -1 2 ]
    rhs:
    [ 1 2 3 4 5 6 ]

#### Task 2: Implement an algorithm for solving the linear system in the book for the elliptic problem. pg. 15, 16  
Output from [TS2Demo](https://gftbs.github.io/math5620/src/TS2Demo.cpp)  
AU = F where F is the right hand side.

    Mat:
    [ -2 1 0 0 0 0 ]
    [ 1 -2 1 0 0 0 ]
    [ 0 1 -2 1 0 0 ]
    [ 0 0 1 -2 1 0 ]
    [ 0 0 0 1 -2 1 ]
    [ 0 0 0 0 1 -2 ]
    rhs:
    [ 1 2 3 4 5 6 ]
    U approx:
    [ -8 -15 -20 -22 -20 -13 ]

    Mat*U
    [ 1 2 3 4 5 6 ]

#### Task 3: Write up the results that you obtain in the approximate solution of the elliptic problem.  
The basic idea is u''(x) = f(x)  
Task 2 shows the approximation of u from the given matrix and rhs.

Note: Spent way too long on this because OpenMP was multiplying the matrix and mixing up the order on a push instead of using the reserved space I gave it. The interesting part was the order was always the same, until one time it randomly changed. which started the investigation.

#### Task 4: Write a code that will compute the coefficients for a finite difference approximation of a given derivative. There is a version of the code (in Matlab) that will do the job. If you use Matlab to get this done, expand out all of the shorthand notation that Matblab uses.  

#### Task 5: Write up a software manual page (we will go through a template in class. Put pages in for the codes you have written for this homework assignment.  
[Manual](https://gftbs.github.io/math5620/Software_Manual/toc)


#### Task 6: Search the internet for applications that involve modeling real physical processes with a simple elliptic ODE. Write a brief paragraph (3 or 4 sentences) that describes your findings. Include links to the sites you cite.  
https://content.sciendo.com/view/journals/amns/3/1/article-p311.xml?lang=en  
This site demonstrates a few uses of modeling physics and the finite difference method. the behavior of electric, gravitational, and fluid potentials are modeled and analyzed, although this focuses more on methods than uses. For uses in gravitational fields of study the model would rely on predicting gravitational forces, then update actual values during the travel, where in fluid flow, it may just be estimated for whatever plan to be proposed.  


