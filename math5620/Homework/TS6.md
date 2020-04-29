### Task 1: Write a code that solves the Poisson equation where the linear solver used is Gauss-Seidel.  
[Gauss-Seidel](https://gftbs.github.io/Software_Manual/procedures/ts6/GSSolve)  
  
### Task 2: Write a code to solve a linear system of equations using the conjugate gradient method. For a test case, use the matrix for the Poisson equation. Use the methodology discussed in class to test the method. That is, generate a right hand side from a vector of ones in the specification of the linear system.  
  
### Task 3: Solve Δu=∂u∂x2+∂u∂y2=f(x,y) with f(x,y)=xy and homogeneous boundary conditions. Use at least three different mesh sizes, say h = 0.1, h=0.01, and h=0.001 for the test.  
  
### Task 4: Build routines that will assemble the matrix for a nine point stencil. Also build a code that will create the right hand side for the Poisson equation.  
[ninePoint](https://gftbs.github.io/math5620/Software_Manual/ninePoint)  
output from ts6Demo.cpp  

      pentaDiagonal Matrix for [1,2,3,4,5,6,7,8,9,10]

      [ 1 4 1 4 -20 4 1 4 1 1 ]
      [ 1 4 1 4 -20 4 1 4 1 2 ]
      [ 1 4 1 4 -20 4 1 4 1 3 ]
      [ 1 4 1 4 -20 4 1 4 1 4 ]
      [ 1 4 1 4 -20 4 1 4 1 5 ]
      [ 1 4 1 4 -20 4 1 4 1 6 ]
      [ 1 4 1 4 -20 4 1 4 1 8 ]
      [ 1 4 1 4 -20 4 1 4 1 9 ]
      [ 1 4 1 4 -20 4 1 4 1 10 ]

### Task 5: Build a code using previously created codes that will compute an approximate solution for the Poisson equation using a 9 point stencil for the Poisson equation in Task 1.  
  
#### Task 6: Search the internet for articles that compare 5 point stencil finite difference approximations and 9 point stencil finite difference approximations. Write a brief paragraph (3 or 4 sentences) that describes your findings. Include links to the sites you cite.  
[REALLY LONG URL](https://pdf.sciencedirectassets.com/271503/1-s2.0-S0898122199X00010/1-s2.0-0898122175900358/main.pdf?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLWVhc3QtMSJIMEYCIQCJYOxPSsTiVt1DO448w%2BgC%2FDS1SHXC%2FPXGSF4AVn%2Fd%2FgIhAIbLKbaKSC5VsTVMltOUeOkXG9PYmw7At1boEoLtFPoFKr0DCPX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQAxoMMDU5MDAzNTQ2ODY1IgwkGx64SGjjERI4DB4qkQOcauQWcBYBDvcrQddJW4MkGuEwmczecaZaiPswbnU%2BcbaY%2FpB%2Fgjfsdy03TCD2ArFjiYZs2w%2FSZbbsOQhIVtx76pa3fA7iyEJm6Bw%2Bb%2BqhgyyuR019nCjwsZJENnHcCkm%2FzTPcy9aMe3KCjaRBbFOJLVypSC4Z309q98RxXDse77xK3EAbxZVHGa9YO5xE8wGFb6%2FrsChw%2Frp9Opm%2BPI0ul%2BpSFEFDeBHsglF2D5hxjbHbWLUeO%2BwTaEoEcxS5kwhrKH2YwZBN88Ky9voGXG0q3pyAMvvIvPDuh5%2BI6DXDlCFiUbk%2Byyyhqe2JERnvMDNHTDFhSx8VeBxeonBS2oqh5QeLJaOootJgUJTtWtSY7nyhB%2B21XtESynj2BMDoqa5IQKkDb8DCIW%2BIFkp8idEkGuwxc1rBPKe6Mc969mXY32nkdbrEHQuJtrVafugJ3QklB9S0cAoo0sHT%2BZlf9bvKpvFO80WUDzsm8A0KiTXeXdxjcbnxdlFrUeGnFXcpROnn1%2F4SuExH4KvLFXACYEC5YTC7%2Fb30BTrqAXDZJQqCfpBhpAxh7swT%2FlVofJz3F1f4zN6%2F8VMNgBgj%2F2xjD5G5ZJwYrSqwaXxu9LysKw63k96bRAYRFYeeePXjI3hrja4dzahttRJlQeYT25LlDBkFsVCtdWFMQ6Qa8JuMI7QTGe4LMKfJerR%2BF5O92Q4BS66RtNKFUN6v%2BVALdJIo%2B04MGULkVf%2F4OKZ4b8MDxMIHdNBijC6UUWHaCKSZB00pOUffePeWCurj1ppEXr89YF8zP6El4FTY8H9%2BILGcaKQGy%2BzZ6lL7jufJ4O40Z%2BmqBNaKnwm5qHH7XA8Ze5p%2FLzCeVXyyZA%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20200409T210019Z&X-Amz-SignedHeaders=host&X-Amz-Expires=300&X-Amz-Credential=ASIAQ3PHCVTYSUOKXKHA%2F20200409%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=62dd14a00af9523f971192d48b449001e451afac5658d7339be17f261595e4aa&hash=b89ef998c0ced8d2d405fee8a4b8f728e5dc16e4185fc1a8c33ec8603b1f8493&host=68042c943591013ac2b2430a89b270f6af2c76d8dfd086a07176afe7c76c2c61&pii=0898122175900358&tid=spdf-b3a3d16d-fe99-4b1b-a3b3-6849dec6e71b&sid=9e8cca4043ba1548fb083e51f5b0a7c0d7e0gxrqa&type=client)  
This site was a really good demonstration of the 5 and 9 point stencils. It says "one can get higher order approximations by use of a nine-point stencil". This is expected because the 9 point stencil adds the influence of 'corner' grid cells to the center cell. This is closer to real life where there is no grid but an 'infinite' and continuous number of directions that a point is influenced from.
