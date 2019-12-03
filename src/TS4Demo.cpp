#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    std::cout << "mixed Secant method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< mixedSecantRoot(0,20,100)<<"\n\n";
    std::cout << "Secant method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< secantRoot(0,100)<<"\n\n";


    return 0;
}