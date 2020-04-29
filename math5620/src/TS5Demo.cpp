#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>

int main(){
    std::vector<double> rhs = {1,2,3,4,5,6};
    std::cout<<"pentaDiagonal Matrix for [1,2,3,4,5,6]\n";
    auto penta = pentaDiag(1,1,-4,1,1,rhs);
    printMat(penta);
    return 0;
}