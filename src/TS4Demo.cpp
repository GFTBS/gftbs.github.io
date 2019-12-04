#pragma clang diagnostic push
#pragma ide diagnostic ignored "openmp-use-default-none"
#include "library.hpp"
#include <iostream>
#include <vector>
#include <omp.h>

int main(){
    std::cout << "mixed Secant method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< mixedSecantRoot(0,20,100)<<"\n\n";
    std::cout << "Secant method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< secantRoot(0,100)<<"\n\n";
    std::vector<double> vector = {1,2,3,4,5,6,7,8,9,10};
    std::vector<double> approx = {0,2,3,4,5,6,7,8,9,10};
    std::cout << "one, two, and infinity norm of <1,2,3,4,5,6,7,8,9,10>: "<<oneNorm(vector)<<", "<<twoNorm(vector)<<", "<<infNorm(vector)<<"\n\n";
    std::cout << "relative error, absolute error with one, two, and infinity norm of <0,2,3,4,5,6,7,8,9,10>\napproximate of <1,2,3,4,5,6,7,8,9,10>: "
    <<relErrorOneNorm(approx,vector)<<", "<<absErrorOneNorm(approx,vector)<<", "<<relErrorTwoNorm(approx,vector)<<", "<<absErrorTwoNorm(approx,vector)<<", "
    <<relErrorInfNorm(approx,vector)<<", "<<absErrorInfNorm(approx,vector)<<"\n\n";
    std::cout << "v1+v2, v1-v2, v1*1.32 with v2 = <0,2,3,4,5,6,7,8,9,10>, v1 = <1,2,3,4,5,6,7,8,9,10>: \n<";
    std::vector<double> answer = vectorAdd(vector,approx);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">, <";
    answer = vectorSub(vector,approx);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">, <";
    answer = vectorScale(vector,1.32);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">\n\n";

    std::vector<double> v1 = {1,1,0};
    std::vector<double> v2 = {0,1,1};
    std::cout <<"Dot Product and cross product of <1,1,0> , <0,1,1>: "<< dotProduct(v1,v2)<<", <";
    answer = crossProduct(v1,v2);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">\n\n";
    std::cout <<"Saxpy of 5.9 <1,1,0> , <0,1,1>: <";
    answer = saxpy(v1,v2,5.9);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">\n\n";
    v2 = {1,2,3};
    std::vector<std::vector<double>> matrix = {{1,2,3},{5,10,20},{1,1,1}};
    std::cout <<"Ax with A = {{1,2,3},{5,10,20},{1,1,1}} , x = {1,2,3}: <";
    answer = matTimesVector(matrix,v2);
    for(double thing : answer){
        std::cout<<thing<<",";
    }
    std::cout<<">\n\n";
    #pragma omp parallel
    {
        std::cout <<"Hello World... from thread: "<<omp_get_thread_num()<<std::endl;
    }

    return 0;
}