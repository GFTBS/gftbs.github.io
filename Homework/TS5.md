#### Task 1: Write a method/routine that will compute the solution of a square linear systems of equations where the coefficient matrix is diagonal. Put an entry in your software manual that documents the method for diagonal systems.  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
output of [TS4Demo](https://gftbs.github.io/src/TS5Demo.cpp):  

    Diagonal solve of \{{1,0,0,20},{0,1.21,0,20},{0,0,5442.5899,20\}}: <20,16.5289,0.00367472,>

#### Task 2: Write a method/routine that will compute the solution of an upper triangular system (the coefficient matrix is upper triangular) and put an entry in your software manual to document the routine.  

#### Task 3: Repeat the previous task, but in the case of a lower triangular coefficient matrix.  

#### Task 4: Write a routine that will row reduce a square matrix into row echelon form. Include a page in your software manual.  

#### Task 5: Write a code that will solve a square linaer system of equations using Gaussian elimination (elementary row operations). Use your backsubstitution method to compute the solution. Note that the first part will result in an upper triangular system. Document the code in your software manual.  

#### Task 6: Write a routine that will compute the LU-factorization of a square matrix. Put an entry in your software manual to document the code.  

#### Task 7: Create a routine that will solve a linear system of equations using the LU-factorization. Make sure you include a page in your software manual.  

#### Task 8: Using OpenMP, see if you can speed up the LU-factorization solution method from the previous task.  

#### Task 9: Embed scaled partial pivoting in a new version of the LU-factorization linear solution method. using more than one processor. Do this without interchanging rows - use an index vector to improve efficiency.  

#### Task 10: Search the internet for sites that document pivoting strategies in numerical solution of linear equations. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.  
