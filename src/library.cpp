#include "library.hpp"
#include <iostream>
#include <cmath>

double absError(double computed, double actual){
    return std::abs(actual - computed);
}

int doublePrecision(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = .5*x^2 at x = pi answer should be pi.
    double pi = M_PI;
    double error = 5, newError, h = 1.0/1.0;
    int precision = -1;

    for (int i=1; i<maxPrecision;++i){
        newError = std::abs(2*pi - (((pi+h)*(pi+h) - (pi-h)*(pi-h))/((pi+h) - (pi - h))));
        if (newError <= error || newError ==0){
            error = newError;
            precision = i;
        }
        else{
            break;
        }

        h = h/2;
    }
    return precision;
}

void helloWorld(){
    std::cout<<"I will use C++\n";
}


double relError(double computed, double actual){
    return (actual - computed)/ actual;
}

int singlePrecision(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = .5*x^2 at x = pi answer should be pi.
    float pi = M_PI;
    float error = 5, newError, h = 1.0/1.0;
    int precision = -1;

    for (int i=1; i<maxPrecision;++i){
        newError = std::abs(2*pi - (((pi+h)*(pi+h) - (pi-h)*(pi-h))/((pi+h) - (pi - h))));
        if (newError <= error || error == 0) {
            error = newError;
            precision = i;
        }
        else{
            break;
        }


        h = h/2;
    }
    return precision;
}

