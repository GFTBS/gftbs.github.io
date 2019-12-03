#ifndef MATH4610_LIBRARY_HPP
#define MATH4610_LIBRARY_HPP

#include <vector>

//General Procedures
int singlePrecision(int maxPrecision);
double relError(double computed, double actual);
int doublePrecision(int maxPrecision);
double absError(double computed, double actual);

//Root Finding Methods
double fixedPointIteration(double start, int maxiters);
double bisectionRoot(double low, double high);
double newtonsRoot(double start, int maxiters);
double secantRoot(double start, int maxiters);
double mixedNewtRoot(double low, double high, int maxiters);
double mixedSecantRoot(double low, double high, int maxiters);
std::vector<double> multiBisection(double step, int numRoots);
std::vector<double> multiNewtons(double step, int numRoots);
std::vector<double> multiSecant(double step, int numRoots);

//Vector math
double oneNorm(const std::vector<double>& vector);
double twoNorm(const std::vector<double>& vector);
double infNorm(const std::vector<double>& vector);
double absErrorOneNorm(const std::vector<double>& approx, const std::vector<double>& exact);
double relErrorOneNorm(const std::vector<double>& approx, const std::vector<double>& exact);
double absErrorTwoNorm(const std::vector<double>& approx, const std::vector<double>& exact);
double relErrorTwoNorm(const std::vector<double>& approx, const std::vector<double>& exact);
double absErrorInfNorm(const std::vector<double>& approx, const std::vector<double>& exact);
double relErrorInfNorm(const std::vector<double>& approx, const std::vector<double>& exact);
std::vector<double> vectorAdd(const std::vector<double>& v1, const std::vector<double>& v2);
std::vector<double> vectorSub(const std::vector<double>& v1, const std::vector<double>& v2);
std::vector<double> vectorScale(const std::vector<double>& v1, double scale);
double dotProduct(const std::vector<double>& v1, const std::vector<double>& v2);
std::vector<double> crossProduct(const std::vector<double>& v1, const std::vector<double>& v2);

#endif //MATH4610_LIBRARY_HPP
