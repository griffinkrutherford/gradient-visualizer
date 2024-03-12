// GradientDescentSolver.hpp

#ifndef GRADIENTDESCENTSOLVER_HPP
#define GRADIENTDESCENTSOLVER_HPP

#include "Function.hpp"
#include <vector>

class GradientDescentSolver {
private:
    double alpha; // Learning rate
public:
    GradientDescentSolver(double alpha);

    std::vector<double> solve(const Function& function, std::vector<double> initialPoint);
};

#endif // GRADIENTDESCENTSOLVER_HPP
