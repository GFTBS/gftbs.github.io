//
// Created by Kaden on 10/23/2019.
//
#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    auto x = genTriDiagMat(2,-1,1,6);
    std::cout << "Tri diagonal Matrix 2, -1, 1 size = 10 (right hand side is contained in the matrix)\n";
    printMat(x);
    return 0;
}
