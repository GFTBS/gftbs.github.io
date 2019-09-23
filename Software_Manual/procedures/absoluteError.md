# Absolute Error

**Routine Name:**           absoluteError

**Author:** Kaden Hart

**Language:** C++ Compiles with cMake as designated in CMakeLists.txt

**Description/Purpose:** This routine will compute the absolute error between two numbers

**Input:** the computed value, and the expected value

**Output:** returns the difference between the two inputs

**Usage/Example:**

std::cout << absError(1,2);

Output from the lines above:

      1

**Implementation/Code:** The following is the code for smaceps()

double absError(double computed, double actual){  
    return actual - computed;  
}  


**Last Modified:** September/2019
