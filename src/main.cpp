#include <iostream>
#include <cmath>
#include "library.hpp"

void doublePrecisionTest(int maxPrecision);

int main(){
    std::cout<<"I will use C++\n";
    int a = singlePrecision(100);
    std::cout<<"Single Precision: "<<a<<" Binary Digits\n";
    a = doublePrecision(100);
    std::cout<<"Double Precision: "<<a<<" Binary Digits\n";
    doublePrecisionTest(a+3);





    return 0;
}



void doublePrecisionTest(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = e^x at x = pi answer should be e^pi.
    double pi = M_PI;
    double e = M_E;
    double error = 5, newError, hh = 1.0/1.0;
    int precision = -1;
    std::cout <<"\n========================================================================\nDouble Precision example of decreasing h using the central difference form.\n";

    for (int i=1; i<maxPrecision;++i){
        newError = std::abs(pow(e,pi) - (((double)(pow(e,pi+hh) - pow(e,pi-hh))/(double)((pi+hh) - (pi - hh)))));
        std::cout<<i <<": Error at h="<<hh<<" is: "<<newError<<std::endl;
        if (newError <= error || newError ==0){
            error = newError;
            precision = i;
        }

        hh = hh/2;
    }
    std::cout <<"End Example\n========================================================================\n";
}
