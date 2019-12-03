#ifndef MATH4610_LIBRARY_HPP
#define MATH4610_LIBRARY_HPP

#include <vector>

int singlePrecision(int maxPrecision);
double relError(double computed, double actual);
int doublePrecision(int maxPrecision);
double absError(double computed, double actual);
double fixedPointIteration(double start, int maxiters);
double bisectionRoot(double low, double high);
double newtonsRoot(double start, int maxiters);
double secantRoot(double start, int maxiters);
double mixedNewtRoot(double low, double high, int maxiters);
double mixedSecantRoot(double low, double high, int maxiters);
std::vector<double> multiBisection(double step, int numRoots);
std::vector<double> multiNewtons(double step, int numRoots);
std::vector<double> multiSecant(double step, int numRoots);

#endif //MATH4610_LIBRARY_HPP
