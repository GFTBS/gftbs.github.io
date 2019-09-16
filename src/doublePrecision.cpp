#include <math.h>

int singlePrecision(int maxPrecision){  //used to check machine precision on the central difference form of f(x) = .5*x^2 at x = pi answer should be pi.
    double pi = M_PI;
    double error = 5, newError, h = 1.0/1.0;
    int precision = -1;

    for (int i=1; i<maxPrecision;++i){
        newError = 2*pi - ((pow((pi+h),2) - pow((pi-h),2))/((pi+h) - (pi - h)));
        if (newError < error){
            error = newError;
            precision = i;
        }

        h = h/2;
    }
    return precision;
}
