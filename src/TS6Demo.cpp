#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>
#include <random>

int main(){
    std::vector<std::vector<double>> matrix = {{4,12,-16},{12,37,-43},{-16,-43,98}};
    std::vector<double> answer;
    std::cout<<"Cholesky of";
    printMat(matrix);
    choleskyFactor(matrix);
    printMat(matrix);
    std::cout<<"\n";

    matrix = {{1,1,1,20},{0,1.21,5,20},{0,0,7,20}};
    std::cout<<"Jacobi Solution of";
    printMat(matrix);
    answer = jacobiSolve(matrix,100);
    printVec(answer);
    std::cout<<"\n";

    std::cout<<"random square matrix low: 1.0, high: 10.0, Size:5";
    matrix = genSquareMat(1.0,10.0,5);
    printMat(matrix);
    std::cout<<"\n";

    std::cout<<"random square diagonally dominant matrix low: 1.0, high: 10.0, Size:5";
    matrix = genSquareDiagDominantMat(1.0,10.0,5);
    printMat(matrix);
    std::cout<<"\n";

    std::cout<<"random square symmetric matrix low: 1.0, high: 10.0, Size:5";
    matrix = genSymmetricMat(1.0,10.0,5);
    printMat(matrix);
    std::cout<<"\n";

    std::cout<<"random square symmetric diagonally dominant matrix low: 1.0, high: 10.0, Size:5";
    matrix = genSymmetricDiagDominantMat(1.0,10.0,5);
    printMat(matrix);
    std::cout<<"\n";

    std::cout<<"Task 7";
    matrix = genSquareDiagDominantMat(1.0,10.0,5);
    answer = {1,1,1,1,1};
    answer = matTimesVector(matrix,answer);
    for(unsigned int i =0; i < matrix.size();++i){
        matrix[i].push_back(answer[i]);
    }
    auto mat2 = matrix;
    answer = jacobiSolve(mat2,100);
    printVec(answer);
    std::cout<<"\n";

    matrix = {{1,1,1,20},{0,1.21,5,20},{0,0,7,20}};
    std::cout<<"Gauss-Seidel Solution of";
    printMat(matrix);
    answer = gaussSeidelSolve(matrix,100);
    printVec(answer);
    std::cout<<"\n";

    std::cout<<"Task 9";
    answer = gaussSeidelSolve(mat2,100);
    printVec(answer);
    std::cout<<"\n";

    return 0;
}