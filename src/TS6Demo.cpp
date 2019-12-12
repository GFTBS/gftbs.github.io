#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>

int main(){
    std::vector<std::vector<double>> matrix = {{4,12,-16},{12,37,-43},{-16,-43,98}};
    std::vector<double> answer;
    std::cout<<"Cholesky of";
    printMat(matrix);
    choleskyFactor(matrix);
    printMat(matrix);
    std::cout<<"\n";


    return 0;
}