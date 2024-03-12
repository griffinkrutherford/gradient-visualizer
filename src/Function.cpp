#include "Function.hpp"

Function::~Function() {
    // Destructor body - can be left empty if nothing specific needs to be done
}


class BaseFunction {
public:

    // Calculate the value of the function at a given point.
    virtual double evaluate(const std::vector<double>& x) const = 0;

    // Calculate the gradient of the function at a given point.
    virtual std::vector<double> gradient(const std::vector<double>& x) const = 0;

    
};
