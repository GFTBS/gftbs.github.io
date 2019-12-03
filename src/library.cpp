#include "library.hpp"
#include <iostream>
#include <cmath>
#include <cfloat>
#include <vector>

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

double secantRoot(double start, int maxiters){ // x cosh(x)+x^3=π
    auto pChange = DBL_MAX;
    auto cChange =DBL_MAX;
    double x = start;
    double xn,xp;
    auto fx = [&](double y){
        return (M_PI - y*y*y)/cosh(y);
    };
    xp= fx(1.09);
    for(int i=0; i < maxiters && std::abs(cChange) <=std::abs(pChange)&& cChange!=0;++i) {
        pChange = cChange;
        xn = xp- (fx(x)*x-fx(x)*xp)/(fx(x)-fx(xp));
        cChange = x - xn;
        xp =x;
        x = xn;
        //std::cout <<i<<": "<<x<<"\n"; //used to watch convergence
    }
    return x;
}

double mixedNewtRoot(double low, double high, int maxiters){ // x cosh(x)+x^3=π
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
        if(std::abs(low-high) < .25){
            break;
        }
    }
    return newtonsRoot(middle, maxiters);
}
double mixedSecantRoot(double low, double high, int maxiters){ // x cosh(x)+x^3=π
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
        if(std::abs(low-high) < .01){
            break;
        }
    }
    return secantRoot(middle, maxiters);
}
std::vector<double> multiBisection(double step, int numRoots){
    auto fx = [&](double x){
        return sin(M_PI*x*2+3.7);
    };
    auto bisect = [&](double low,double high){
        auto fx = [&](double x){
            return sin(M_PI*x*2+3.7);
        };
        int machinePrecision = doublePrecision(100);
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
    };
    std::vector<double> roots;
    double range[2] = {1.1,68.3};
    double current = range[0]+step;
    double low = range[0];
    if(fx(low)==0){roots.push_back(current);}
    while(current<=range[1]&&roots.size()<numRoots){
        if(fx(current)==0){roots.push_back(current);}
        if(fx(current)*fx(low)<0){
            roots.push_back(bisect(low,current));
        }
        low = current;
        current +=step;
    }
    return roots;
}
std::vector<double> multiNewtons(double step, int numRoots){
    auto fx = [&](double x){
        return sin(M_PI*x*2+3.7);
    };
    auto newton = [&](double start){
        auto fx = [&](double x){
            return sin(M_PI*x*2+3.7);
        };
        auto fpx = [&](double x){
            return cos(M_PI*x*2+3.7)*2*M_PI;
        };
        auto pChange = DBL_MAX;
        auto cChange =DBL_MAX;
        int precision = doublePrecision(100);
        double h = 1;
        for(int i =0;i<precision;i++){
            h = h/2;
        }
        double x = start;
        double xn;
        for(int i=0; i < 100 && cChange!=0;++i) {
            pChange = cChange;
            xn = x - fx(x) / fpx(x);
            cChange = x - xn;
            x = xn;
            //std::cout <<i<<": "<<x<<"\n"; //used to watch convergence
        }
        return x;
    };
    std::vector<double> roots;
    double range[2] = {1.1,68.3};
    double current = range[0]+step;
    double low = range[0];
    if(fx(low)==0){roots.push_back(current);}
    while(current<=range[1]&&roots.size()<numRoots){
        if(fx(current)==0){roots.push_back(current);}
        if(fx(current)*fx(low)<0){
            roots.push_back(newton(current));
        }
        low = current;
        current +=step;
    }
    return roots;
}
std::vector<double> multiSecant(double step, int numRoots){
    auto fx = [&](double x){
        return sin(M_PI*x*2+3.7);
    };
    auto secant = [&](double start){
        auto fx = [&](double x){
            return sin(M_PI*x*2+3.7);
        };
        auto pChange = DBL_MAX;
        auto cChange =DBL_MAX;
        double x = start;
        double xn,xp;
        xp= x-.01;
        for(int i=0; i < 100 && std::abs(cChange) <=std::abs(pChange)&& cChange!=0;++i) {
            pChange = cChange;
            xn = x- fx(x)*((x-xp)/(fx(x)-fx(xp)));
            cChange = x - xn;
            xp =x;
            x = xn;
            //std::cout <<i<<": "<<x<<"\n"; //used to watch convergence
        }
        return x;
    };
    std::vector<double> roots;
    double range[2] = {1.1,68.3};
    double current = range[0]+step;
    double low = range[0];
    if(fx(low)==0){roots.push_back(current);}
    while(current<=range[1]&&roots.size()<numRoots){
        if(fx(current)==0){roots.push_back(current);}
        if(fx(current)*fx(low)<0){
            roots.push_back(secant(current));
        }
        low = current;
        current +=step;
    }
    return roots;
}

//Vector Math###########################################################################################################

double oneNorm(const std::vector<double>& vector){
    double norm =0;
    for(double thing : vector){
        norm += std::abs(thing);
    }
    return norm;
}
double twoNorm(const std::vector<double>& vector) {
    double norm =0;
    for(double thing : vector){
        norm += thing*thing;
    }
    return std::sqrt(norm);
}
double infNorm(const std::vector<double>& vector) {
    double norm =0;
    for(double thing : vector){
        if(std::abs(thing)>norm){
            norm = thing;
        }
    }
    return norm;
}
double absErrorOneNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return oneNorm(combo);
}
double relErrorOneNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return oneNorm(combo)/oneNorm(approx);
}
double absErrorTwoNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return twoNorm(combo);
}
double relErrorTwoNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return twoNorm(combo)/oneNorm(approx);
}
double absErrorInfNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return infNorm(combo);
}
double relErrorInfNorm(const std::vector<double>& approx, const std::vector<double>& exact){
    if(approx.size()!=exact.size()){ return DBL_MAX;}
    std::vector<double> combo;
    for(unsigned int i =0;i<approx.size();i++){
        combo.push_back(approx[i]-exact[i]);
    }
    return infNorm(combo)/infNorm(approx);
}
std::vector<double> vectorAdd(const std::vector<double>& v1, const std::vector<double>& v2){
    if(v1.size()!=v2.size()){ return std::vector<double> {0};}
    std::vector<double> answer;
    for(unsigned int i =0; i < v1.size();++i){
        answer.push_back(v1[i]+v2[i]);
    }
    return answer;
}
std::vector<double> vectorSub(const std::vector<double>& v1, const std::vector<double>& v2){
    if(v1.size()!=v2.size()){ return std::vector<double> {0};}
    std::vector<double> answer;
    for(unsigned int i =0; i < v1.size();++i){
        answer.push_back(v1[i]-v2[i]);
    }
    return answer;
}
std::vector<double> vectorScale(const std::vector<double>& v1, double scale){
    std::vector<double> answer;
    answer.reserve(v1.size());
for(double i : v1){
        answer.push_back(i*scale);
    }
    return answer;
}
double dotProduct(const std::vector<double>& v1, const std::vector<double>& v2){
    double answer =0;
    if(v1.size()!=v2.size()){ return answer;}
    for(unsigned int i =0; i < v1.size();++i){
        answer+=v1[i]*v2[i];
    }
    return answer;
}
std::vector<double> crossProduct(const std::vector<double>& v1, const std::vector<double>& v2){
    if(v1.size()!=v2.size()){ return std::vector<double> {0};}
    unsigned int size = v1.size();
    std::vector<double> answer;
    for(unsigned int i =0; i < v1.size();++i){
        answer.push_back(v1[(i+1)%size]*v2[(i+2)%size]-v1[(i+2)%size]*v2[(i+1)%size]);
    }
    return answer;
}