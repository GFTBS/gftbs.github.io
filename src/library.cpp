#include "library.hpp"
#include <iostream>
#include <cmath>

double absError(double computed, double actual){
    return std::abs(actual - computed);
}

int doublePrecision(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = e^x at x = pi answer should be e^pi.
    double pi = M_PI;
    double e = M_E;
    double error = 5, newError, hh = 1.0/1.0;
    int precision = -1;

    for (int i=1; i<maxPrecision;++i){
        newError = std::abs(pow(e,pi) - (((double)(pow(e,pi+hh) - pow(e,pi-hh))/(double)((pi+hh) - (pi - hh)))));
        if (newError <= error || newError ==0){
            error = newError;
            precision = i;
        }
        else{
            break;
        }

        hh = hh/2;
    }

    //std::cout<<"Double Error: "<< error<<std::endl;
    return precision;
}


double relError(double computed, double actual){
    return std::abs((actual - computed)/ actual);
}

int singlePrecision(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = e^x at x = pi answer should be e^pi.
    float pi = M_PI;
    float e = M_E;
    float error = 5, newError, hh = 1.0/1.0;
    int precision = -1;

    for (int i=1; i<maxPrecision;++i){
        newError = std::abs(powf(e,pi) - (((float)(powf(e,pi+hh) - powf(e,pi-hh))/(float)((pi+hh) - (pi - hh)))));
        if (newError <= error || newError ==0){
            error = newError;
            precision = i;
        }
        else{
            break;
        }

        hh = hh/2;
    }
    //std::cout<<"Single Error: "<< error<<std::endl;
    return precision;
}