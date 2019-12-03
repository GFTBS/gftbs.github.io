#include "library.hpp"
#include <iostream>
#include <vector>
int main(){
    //6 digits in 70 iterations
    std::cout << "Newtons method of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< newtonsRoot(1,100)<<"\n\n";
    std::cout << "Secant method of x cosh(x)+x^3=pi \nexpected value: 1.09633\ncalculated: "<< secantRoot(1.1,100)<<"\n\n";
    std::cout << "mixed newton's method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< mixedNewtRoot(0,20,100)<<"\n\n";
    std::cout << "mixed Secant method of x cosh(x)+x^3=pi starting range [0,20]\nexpected value: 1.09633\ncalculated: "<< mixedSecantRoot(0,20,100)<<"\n\n";
    std::cout << "5 bisection roots of f(x)=sin(pi*x*2+3.7):";
    std::vector<double> roots = multiBisection(.1,5);
    for (double root : roots) {
        std::cout<<" "<< root;
    }
    std::cout<<"\n\n";
    std::cout << "5 Newton's roots of f(x)=sin(pi*x*2+3.7):";
    roots = multiNewtons(.5,5);
    for (double root : roots) {
        std::cout<<" "<< root;
    }
    std::cout<<"\n\n";
    std::cout << "5 Secant roots of f(x)=sin(pi*x*2+3.7):";
    roots = multiSecant(.5,5);
    for (double root : roots) {
        std::cout<<" "<< root;
    }
    std::cout<<"\n\n";

    return 0;
}
