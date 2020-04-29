### Task 1: Write a finite difference code for the nonlinear elliptic problem θ′(t)+gl sin(θ(t))=0 with θ(0)=1 and theta(2)=−1. Use g/l=1.  
  
### Task 2: Simplify the problem in Task 1 using the small angle assumption sin(θ)≈θ.  
  
### Task 3: Let's start into approximate solution of partial difference equations. With the simplest equation, Δu=∂u∂x2+∂u∂y2=f(x,y) Start by writing a code to initialize the associated pentadiagonal matrix using central differences. Do this using the sparse storage into 5 vectors. Also, write a routine that initializes the right hand side of the system of equations.  
[Software Manual](https://gftbs.github.io/math5620/Software_Manual/toc)  
from ts5Demo.cpp  

    pentaDiagonal Matrix for [1,2,3,4,5,6]

    [ 1 1 -4 1 1 1 ]
    [ 1 1 -4 1 1 2 ]
    [ 1 1 -4 1 1 3 ]
    [ 1 1 -4 1 1 4 ]
    [ 1 1 -4 1 1 5 ]
    [ 1 1 -4 1 1 6 ]

### Task 4: Write a routine that implements Jacobi iteration for the approximate solution linear systems of equations.  
[Software Manual](https://gftbs.github.io/math5620/Software_Manual/toc)  
[Jacobi](https://gftbs.github.io/Software_Manual/procedures/ts6/jacobiSolve) 
### Task 5: Write a code that solves the elliptic problem in Task 1 using your Jacobi iteration. Use f(x,y)=xy and homogeneous boundary conditions.  
[Software Manual](https://gftbs.github.io/math5620/Software_Manual/toc)  
[Jacobi](https://gftbs.github.io/Software_Manual/procedures/ts6/jacobiSolve)  
#### Task 6: Search the internet for discussions of using finite difference methods for elliptic operators. Write a brief paragraph (3 or 4 sentences) that describes your findings. Include links to the sites you cite.  
https://www.wias-berlin.de/people/john/LEHRE/NUM_PDE_FUB_19/num_pde_fub_2.pdf  
This site describes some finite difference methods, the forward, backward, centered, and second order difference. It goes into further detail about consistency of each method. The consistency of a method is used to measures the quality of the approximation of the actual value.
