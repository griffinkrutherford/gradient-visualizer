// GradientDescentSolver.cpp

#include "GradientDescentSolver.hpp"

GradientDescentSolver::GradientDescentSolver(double alpha) : alpha(alpha) {}

std::vector<double> GradientDescentSolver::solve(const Function& function, std::vector<double> initialPoint) {
    std::vector<double> x = initialPoint;
    for (int i = 0; i < 100; ++i) { // Iterate 100 times as an example
        auto grad = function.gradient(x);
        for (size_t j = 0; j < x.size(); ++j) {
            x[j] = x[j] - alpha * grad[j];
        }
    }
    return x;
}
