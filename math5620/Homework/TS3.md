### Task 1: For the tridiagonal matrix that arises from the central difference applied to the elliptic problem u′′=f(x) on [0,1] develop an algorithm that performs the LU decomposition of the coefficient matrix. Also, develop the forward and backward substitution methods to go along with the LU factorization.  
  
### Task 2: Apply the code from the previous task to the case where f(x)=0 and u(0)=1 and u(1)=3. Use some graphing utility to display your results. Do this for varying numbers of mesh points. Make the coarsest mesh size h=1/8 and refine to h=1/256.  
  
### Task 3: Repeat the previous task with f(x)=10.0 sin(2πx) and use homogeneous Dirichlet boundary conditions.  
  
### Task 4: Repeat the previous two tasks combining f(x) from Task 3 with the boundary conditions given in Task 2.  
  
### Task 5: Create a new code from the elliptic problem with Neumann boundary conditions. Using the same data as in Task 4 test your code using homogeneous Neumann conditions. Also, run a test case for unit fluxes at both ends of the domain.  

### Task 6: Search the internet for discussions of handling Dirichlet versus Neumann conditions. Write a brief paragraph (3 or 4 sentences) that describes your findings. Include links to the sites you cite.  
https://www.sciencedirect.com/topics/engineering/neumann-boundary-condition  
This site shows the difference with the given topic of Fluid Mechanics of Viscoelasticity. If Dirichlet boundaries are used, then the prescribed temperature will enter and flow through the system. If th Neumann conditions are used, then the outward flux is known. Both of these require the endpoint to be viewed seperately from the internal points.