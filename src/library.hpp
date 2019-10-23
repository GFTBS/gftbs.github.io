#ifndef MATH4610_LIBRARY_HPP
#define MATH4610_LIBRARY_HPP

int singlePrecision(int maxPrecision);
double relError(double computed, double actual);
int doublePrecision(int maxPrecision);
double absError(double computed, double actual);
double fixedPointIteration(double start);
double bisectionRoot(double low, double high);

#endif //MATH4610_LIBRARY_HPP
