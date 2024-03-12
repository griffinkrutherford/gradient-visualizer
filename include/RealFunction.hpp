#ifndef REALFUNCTION_HPP
#define REALFUNCTION_HPP

#include "Function.hpp"

class RealFunction : public Function {
public:
    double evaluate(const std::vector<double>& x) const override;

    std::vector<double> gradient(const std::vector<double>& x) const override;
};

#endif // REALFUNCTION_HPP

