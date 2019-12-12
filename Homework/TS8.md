#### Task 1: Write code that implements the power method for finding the largest eigenvalue in magnitude of a square matrix. Document the method in your software manual page. Use a symmetric diagonally dominant matrix to test the method and include the results as an example in your software manual.

#### Task 2: Try out your power method on the Hilbert matrix of order n=10.

#### Task 3: Implement the inverse power method for finding the smallest eigenvalue of a square matrix. Use a symmetric diagonally dominant matrix to test the method and include the results as an example in your software manual.

#### Task 4: Try out your inverse power method on the Hilbert matrix of order n=10.

#### Task 5: Implement the power method with shifting to try to estimate eignevalues of a matrix. Include a page in your software manual. Try to find as eigenvalues not equal to the largest or smallest. Use a symmetric diagonally dominant matrix to test the code.

#### Task 6: Try out your shifted power method on the Hilbert matrix of order n=10.

#### Task 7: Knowing that the condition number a matrix in the 2-norm is related to the largest and smallest eigenvalues, write a routine that will compute an estimate of the 2-condition number using the power method and inverse power method.

#### Task 8: Try out the condition number code on the Hilber matrix for n=10. Does this work?

#### Task 9: Combine the tridiagonal matrix multiplication routine to compute the 2-condition number of a tridiagonal matrix. Use a symmetric diagonally dominant tridiagonal matrix to test the code. Use a tridiagonal matrix with n=10,100,1000,10000. Report the results including execution time.

#### Task 10: Search the internet for sites that document the use of Power iteration and/or Inverse Power Iteration. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.  
https://www.cs.cornell.edu/~bindel/class/cs6210-f16/lec/2016-10-17.pdf  
This document explains the need for a power method; roots of charectoristic polynomial equations are too sensitive to changes in coefficients. The power iteration takes advantage of cancelations when the system is diagonalized and raised to a large power. The power iteration converges linearly to the dominant eigenvalue.
