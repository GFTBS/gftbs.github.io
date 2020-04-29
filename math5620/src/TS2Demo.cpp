//
// Created by Kaden on 10/23/2019.
//
#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    //right hand side is a list of points, so it's simply a vector
    std::vector<double> rhs = {1,2,3,4,5,6,20};
    auto x = genTriDiagMat(-2,1,1, rhs);
    auto y = genTriDiagMat(-2,1,1, rhs);
    std::cout << "Tri diagonal Matrix -2, 1, 1 size = size of rhs \n";
    printMat(x);
    std::cout <<"rhs: ";
    printVec(rhs);

    std::cout << "U approx: ";
    auto z = approxU(x,rhs);
    printVec(z);
    printVec(matTimesVector(y,z));
    std::cout << "\nget Coefficients for points (-1, 0, 1): \n";
    rhs = {-1, 0, 1};
    printVec(diffCoef(rhs,1));
    return 0;
}
/*

rhs:
[ 1 2 3 4 5 6 ]
U approx:
[ -8 -15 -20 -22 -20 -13 ]

[ 1 2 3 4 5 6 ]
 */