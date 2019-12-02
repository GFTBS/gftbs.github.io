#include "library.hpp"
#include <iostream>
#include <cmath>
#include <cfloat>

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
//x≈1.096327788292240187224006868725774624523189807363408824495262094888955008877488472442044026351833693544073747220676874491102970453662676747971345332569704084553 from wolfram

double fixedPointIteration(double start, int maxiters){ // x cosh(x)+x^3=π
    auto pChange = DBL_MAX;
    auto cChange =DBL_MAX;
    double x = start;
    double xn;
    for(int i=0; i < maxiters && std::abs(cChange) <=std::abs(pChange)&& cChange!=0;++i) {
        pChange = cChange;
        xn = std::cbrt(M_PI - x*cosh(x));
        cChange = x - xn;
        x = xn;
        //std::cout <<i<<": "<<x<<"\n"; //used to watch convergence
    }
    return x;
}
double bisectionRoot(double low, double high){ // x cosh(x)+x^3=π
    int machinePrecision = doublePrecision(100);
    auto fx = [&](double x){
        return x*x*x+x*cosh(x)-M_PI;
    };
    double middle = (high+low)/2;
    double fmiddle = fx(middle);
    double fhigh = fx(high);
    double flow = fx(low);
    for(int i =0; i <machinePrecision;++i){ //skips one so the last run returns middle
        if(flow == 0) return low;
        if(fhigh == 0) return high;
        if(fmiddle ==0)return middle;
        if(flow*fhigh>=0) return DBL_MAX;
        if(flow*fmiddle<=0){
            high = middle;
        }
        else{
            low = middle;
        }

        middle = (high+low)/2;
        fmiddle = fx(middle);
        fhigh = fx(high);
        flow = fx(low);
    }
    return middle;
}
double newtonsRoot(double start, int maxiters){ // x cosh(x)+x^3=π
    auto pChange = DBL_MAX;
    auto cChange =DBL_MAX;
    int precision = doublePrecision(100);
    double h = 1;
    for(int i =0;i<precision;i++){
        h = h/2;
    }
    double x = start;
    double xn;
    for(int i=0; i < maxiters && std::abs(cChange) <=std::abs(pChange)&& cChange!=0;++i) {
        pChange = cChange;
        xn = std::cbrt(M_PI - x*cosh(x)) - (std::cbrt(M_PI - (x-h)*cosh(x-h))-std::cbrt(M_PI - (x+h)*cosh(x+h)))/2*h;
        cChange = x - xn;
        x = xn;
        //std::cout <<i<<": "<<x<<"\n"; //used to watch convergence
    }
    return x;
}