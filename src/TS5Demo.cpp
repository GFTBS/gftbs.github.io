#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>

int main(){
    std::vector<std::vector<double>> matrix = {{1,0,0,20},{0,1.21,0,20},{0,0,5442.5899,20}};
    std::vector<double> answer;
    std::cout<<"Diagonal solve of";
    printMat(matrix);
    answer = diagMatSolve(matrix);
    printVec(answer);
    std::cout<<"\n";

    matrix = {{1,1,1,20},{0,1.21,5,20},{0,0,7,20}};
    std::cout<<"Upper Triangular solve of";
    printMat(matrix);
    answer = upperTMatSolve(matrix);
    printVec(answer);
    std::cout<<"\n";

    matrix = {{7,0,0,20},{5,1.21,0,20},{1,1,1,20}};
    std::cout<<"Lower Triangular solve of";
    printMat(matrix);
    answer = lowerTMatSolve(matrix);
    printVec(answer);
    std::cout<<"\n";

    return 0;
}