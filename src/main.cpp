#include "RealFunction.hpp"
#include "ComplexFunction.hpp"
#include "GradientDescentSolver.hpp"
#include "Visualizer.hpp"
#include <vector>

int main() {
    // Example real function: f(x) = x^2
    class QuadraticFunction : public RealFunction {
    public:
        double evaluate(const std::vector<double>& x) const override {
            return x[0] * x[0];
        }

        std::vector<double> gradient(const std::vector<double>& x) const override {
            return {2 * x[0]};
        }
    };

    // Instantiate the example function
    QuadraticFunction quadFunc;

    // Setup the gradient descent solver with a learning rate
    GradientDescentSolver solver(0.1); // Example learning rate

    // Perform gradient descent starting from an initial point
    std::vector<double> startPoint = {10}; // Example starting point
    auto minPoint = solver.solve(quadFunc, startPoint);

    // Instantiate the visualizer
    Visualizer visualizer;

    // Visualize the process (assuming visualize can show the descent path)
    visualizer.visualize(quadFunc, minPoint); // This function signature might need to be adjusted

    return 0;
}
