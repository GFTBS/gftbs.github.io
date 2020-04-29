#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>
#include <random>

int main(){
    std::vector<double> points = {1,4,1,4,-20,4,1,4,1};
    std::vector<double> rhs = {1,2,3,4,5,6,8,9,10};
    std::cout<<"nine Diagonal Matrix for [1,2,3,4,5,6,7,8,9,10]\n";
    auto nine = ninePoint(points ,rhs);
    printMat(nine);
    return 0;
}