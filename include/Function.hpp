#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <vector>

class Function {
public:
    virtual ~Function(); // Declare the destructor

    // Calculate the value of the function at a given point.
    virtual double evaluate(const std::vector<double>& x) const = 0;

    // Calculate the gradient of the function at a given point.
    virtual std::vector<double> gradient(const std::vector<double>& x) const = 0;
};

#endif // FUNCTION_HPP
