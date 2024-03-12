#ifndef COMPLEXFUNCTION_HPP
#define COMPLEXFUNCTION_HPP

#include "Function.hpp"
#include <complex>
#include <vector>

class ComplexFunction : public Function {
public:
    // Overload the evaluate and gradient methods for complex numbers
    virtual std::complex<double> evaluate(const std::vector<std::complex<double>>& x) const = 0;
    virtual std::vector<std::complex<double>> gradient(const std::vector<std::complex<double>>& x) const = 0;
};

#endif // COMPLEXFUNCTION_HPP
