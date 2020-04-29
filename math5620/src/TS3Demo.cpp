#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    std::cout<<"Boundary [0,3] with mesh size 1/8";
    auto vec = dirichletBoundary(0,3,8);
    printVec(vec);
    auto tri = genTriDiagMat(-2,1,1,vec);
    std::cout<<"f(x) = ";
    printVec(matTimesVector(tri,vec));
    std::cout<<"Boundary [0,3] with mesh size 1/64 f(x)=";
    vec = dirichletBoundary(0,3,64);
    tri = genTriDiagMat(-2,1,1,vec);
    printVec(matTimesVector(tri,vec));

    std::vector<double> x = {0, .707, 1, .707, 0, -.707, -1, -.707};
    tri = genTriDiagMat(-2,1,1,x);
    std::cout<<"U for f(x)=sin(2pi*x)";
    printVec(approxU(tri,x));

    return 0;
}
