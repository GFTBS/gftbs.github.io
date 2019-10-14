#include <iostream>
#include "library.hpp"

int main(){
    int a = singlePrecision(100);
    std::cout<<"Single Precision: "<<a<<" Binary Digits\n";
    a = doublePrecision(100);
    std::cout<<"Double Precision: "<<a<<" Binary Digits\n";
    return 0;
}