# Task Sheet 1 
### Task 1 Email link to github page 
Emailed
### Task 2 Add instructor as collaborator
Added
### Task 3 Email instructor which environment will be used
Windows or Linux, Mostly windows.
### Task 4 write a code in the language you intend to use.
Task Sheet 1 demo  
[main.cpp](https://gftbs.github.io/src/main.cpp)  
Output:  

          I will use C++  
### Task 5 Email A link to the table of contents.
[Table Of Contents](https://gftbs.github.io/Homework/hw_toc)  

### Task 6 Demonstrate machine precision causing errors as h decreases
[Single Precision Test](https://gftbs.github.io/Software_Manual/procedures/singlePrecision)    
[Double Precision Test](https://gftbs.github.io/Software_Manual/procedures/doublePrecision)  
[Manual](https://gftbs.github.io/Software_Manual/toc)  
Task Sheet 1 demo  
[main.cpp](https://gftbs.github.io/src/main.cpp)  
Output:  

          Double Precision example of decreasing h using the central difference form.
          1: Error at h=1 is: 4.05428
          2: Error at h=0.5 is: 0.97632
          3: Error at h=0.25 is: 0.241803
          4: Error at h=0.125 is: 0.0603093
          5: Error at h=0.0625 is: 0.0150685
          6: Error at h=0.03125 is: 0.00376657
          7: Error at h=0.015625 is: 0.000941609
          8: Error at h=0.0078125 is: 0.0002354
          9: Error at h=0.00390625 is: 5.88499e-05
          10: Error at h=0.00195312 is: 1.47125e-05
          11: Error at h=0.000976562 is: 3.67811e-06
          12: Error at h=0.000488281 is: 9.19529e-07
          13: Error at h=0.000244141 is: 2.29888e-07
          14: Error at h=0.00012207 is: 5.74771e-08
          15: Error at h=6.10352e-05 is: 1.43598e-08
          16: Error at h=3.05176e-05 is: 3.5914e-09
          17: Error at h=1.52588e-05 is: 7.97428e-10
          18: Error at h=7.62939e-06 is: 9.8936e-11
          19: Error at h=3.8147e-06 is: 1.33895e-10
          20: Error at h=1.90735e-06 is: 1.33895e-10
          End Example

Note how error is reduced until line 18, where a smaller value of h starts yielding a larger error.  

### Task 7 Implement an absolute error and relative error routine
[Absolute Error](https://gftbs.github.io/Software_Manual/procedures/absoluteError)    
[Relative Error](https://gftbs.github.io/Software_Manual/procedures/relError)    
[Manual](https://gftbs.github.io/Software_Manual/toc)   

### Task 8 create a shared Library  
Designated in CMakeLists.txt  
[CMakeLists.txt](https://gftbs.github.io/src/CMakeLists.txt)  
Link to DLL Warning This is a DLL and windows will be upset if you try to download it!  
[libMath4610.dll](https://gftbs.github.io/src/cmake-build-debug/libmath4610.dll)

### Task 9 Find the derivative of e^x at x = pi
Task Sheet 1 demo  
[main.cpp](https://gftbs.github.io/src/main.cpp)  
Output:

          calculated e^pi = 23.1407
          Actual e^pi = 23.1407
          Absolute error = 9.8936e-11
          Relative Error = 4.27541e-12

### Task 10
Absolute error is the difference between the calculated and the actual number. Relative error scales the error based on the size of the two numbers, almost like a percent error. Using a binary computer introduces errors when dealing with decimal values because sometimes there is no direct conversion. There is also the error involved when a number gets so small a that a normal floating point cannot contain it.    
http://pages.cs.wisc.edu/~sifakis/courses/cs412-s13/lecture_notes/CS412_24_Jan_2013.pdf
