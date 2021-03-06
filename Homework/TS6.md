#### Task 1: Write a code that implements a Cholesky factorization of a real matrix. Include a check on the matrix to make sure it is symmetric. Put an entry in your software manual that documents the method.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    Cholesky of
    [ 4 12 -16 ]
    [ 12 37 -43 ]
    [ -16 -43 98 ]

    [ 1 3 -4 ]
    [ 3 1 5 ]
    [ -4 5 1 ]

#### Task 2: Write a method that implements Jacobi iteration for solving linear systems of equations. Put an entry in your software manual for this method.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    Jacobi Solution of
    [ 1 1 1 20 ]
    [ 0 1.21 5 20 ]
    [ 0 0 7 20 ]

    [ 12.4203 4.72255 2.85714 ]

#### Task 3: Write a routine that will create a square matrix with dimension n. Use a random number generator to determine the entries in the matrix. You can use a uniform distribution as the basis for the values created. Put a page in for this method.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):   

    random square matrix low: 1.0, high: 10.0, Size:5
    [ 7.53624 9.23805 6.34892 5.63822 9.77634 ]
    [ 6.95405 5.75787 8.09644 1.66691 3.96865 ]
    [ 6.25369 1.27875 9.35734 1.17777 8.01435 ]
    [ 4.0244 4.08273 4.73338 9.16582 6.86332 ]
    [ 6.13567 1.07045 3.58257 7.5661 7.3216 ]

#### Task 4: Repeat Task 3 with output that is diagonally dominant as defined in class.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    random square diagonally dominant matrix low: 1.0, high: 10.0, Size:5
    [ 31.0015 9.23805 6.34892 5.63822 9.77634 ]
    [ 6.95405 20.686 8.09644 1.66691 3.96865 ]
    [ 6.25369 1.27875 16.7246 1.17777 8.01435 ]
    [ 4.0244 4.08273 4.73338 19.7038 6.86332 ]
    [ 6.13567 1.07045 3.58257 7.5661 18.3548 ]

#### Task 5: Repeat Task 3 with output that is a symmetric matrix.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    random square symmetric matrix low: 1.0, high: 10.0, Size:5
    [ 7.53624 6.95405 6.25369 4.0244 6.13567 ]
    [ 6.95405 5.75787 1.27875 4.08273 1.07045 ]
    [ 6.25369 1.27875 9.35734 4.73338 3.58257 ]
    [ 4.0244 4.08273 4.73338 9.16582 7.5661 ]
    [ 6.13567 1.07045 3.58257 7.5661 7.3216 ]

#### Task 6: Repeat Task 3 with output that is both symmetric and diagonally dominant. 
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    random square symmetric diagonally dominant matrix low: 1.0, high: 10.0, Size:5
    [ 31.0015 6.95405 6.25369 4.0244 6.13567 ]
    [ 6.95405 20.686 1.27875 4.08273 1.07045 ]
    [ 6.25369 1.27875 16.7246 4.73338 3.58257 ]
    [ 4.0244 4.08273 4.73338 19.7038 7.5661 ]
    [ 6.13567 1.07045 3.58257 7.5661 18.3548 ]

#### Task 7: Use each of the matrix generation routines with your Jacobi iteration to test the code. You should generate a matrix with dimension n with n large, create the right hand side of the system by multiplying the matrix on the left into a vector of ones. Then solve the resulting system. You solutions should be close to 1 if your Jacobi iteration is working.  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    Task 7
    [ 0.0507803 0.640868 1.50742 2.30934 0.953503 ]

#### Task 8: Implement the Gauss-Seidel method for solving linear systems of equations. Include a software manual page for this method. 
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    Gauss-Seidel Solution of
    [ 1 1 1 20 ]
    [ 0 1.21 5 20 ]
    [ 0 0 7 20 ]

    [ 12.4203 4.72255 2.85714 ]
    
#### Task 9: Run the Gauss-Seidel iteration on the same matrices as you created in Task 7. Compare the results of the Jacobi iteration runs to the Gauss-Seidel runs. This means keeping track of the number of iterations for each method.  
The gauss-Seidel would converge to an answer in 5 iterations, where the jacobi iteration would converge in 13 iterations. The gauss-seidel produced closer to the expected answer.  
output of [TS6Demo](https://gftbs.github.io/src/TS6Demo.cpp):  

    Task 9
    [ 0.00822163 0.890495 1.28818 2.30332 0.998445 ]

#### Task 10: Search the internet for sites that document the use of Jacobi iteration and/or Gauss-Seidel. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.  
https://www.sciencedirect.com/topics/engineering/gauss-seidel-method#:~:targetText=The%20difference%20between%20the%20Gauss,as%20demonstrated%20in%20Table%207.2.  
The Gauss-Seidel method seems to just be an updated method of the jacobian method. There seems to be no reason not to use the Gauss-Seidel method because it is the jacobian method, it just updates the values faster. The Gauss-Seidel method should converge faster because it updates it's values faster. 
