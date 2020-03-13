//
// Created by Kaden on 10/23/2019.
//
#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    //right hand side is a list of points, so it's simply a vector
    std::vector<double> rhs = {1,2,3,4,5,6};
    auto x = genTriDiagMat(2,-1,1,6, rhs);
    std::cout << "Tri diagonal Matrix 2, -1, 1 size = 10 (right hand side is contained in the matrix)\n";
    printMat(x);
    printVec(matTimesVector(x,rhs));
    return 0;
}
