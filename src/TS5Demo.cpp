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

    matrix = {{7,1,1,20},{5,1.21,1,20},{1,1,1,20}};
    std::cout<<"REF of";
    printMat(matrix);
    refMat(matrix);
    printMat(matrix);
    std::cout<<"\n";

    matrix = {{7,1,1,20},{5,1.21,1,20},{1,1,1,20}};
    std::cout<<"Solution of";
    printMat(matrix);
    answer=gaussianSolve(matrix);
    printVec(answer);
    std::cout<<"\n";

    matrix = {{1,1,1,1},{4,3,-1,6},{3,5,3,4}};
    std::cout<<"LU of";
    printMat(matrix);
    luFactorization(matrix);
    printMat(matrix);
    std::cout<<"\n";

    matrix = {{1,1,1,1},{4,3,-1,6},{3,5,3,4}};
    std::cout<<"LU Solution of";
    printMat(matrix);
    answer = luSolve(matrix);
    printVec(answer);
    std::cout<<"\n";

    matrix = {{3,5,3,4},{4,3,-1,6},{1,1,1,1}};
    std::cout<<"LU Pivoting Solution of";
    printMat(matrix);
    std::vector<unsigned int> indices;
    answer = luPivoting(matrix, indices);
    std::cout <<"Index Vector";
    printVec(indices);
    std::cout <<"Solution Vector";
    printVec(answer);
    std::cout<<"\n";

    return 0;
}