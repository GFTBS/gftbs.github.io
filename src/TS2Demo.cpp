//
// Created by Kaden on 10/23/2019.
//
#include "library.hpp"
#include <iostream>
int main(){
    std::cout << "fixed point iteration of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< fixedPointIteration(1,100)<<"\n\n";
    std::cout << "Bisection of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< bisectionRoot(1,2)<<"\n\n";
    
    
    return 0;
}
