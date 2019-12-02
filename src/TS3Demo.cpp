#include "library.hpp"
#include <iostream>
int main(){
    //6 digits in 70 iterations
    std::cout << "fixed point iteration of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< newtonsRoot(1,100)<<"\n\n";
    //std::cout << "Bisection of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< bisectionRoot(1,2)<<"\n\n";


    return 0;
}
