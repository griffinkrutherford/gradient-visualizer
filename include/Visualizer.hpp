#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

// Include the SFML graphics header
#include <SFML/Graphics.hpp>
#include "Function.hpp"

class Visualizer {
public:
    void visualize(const Function& function, const std::vector<double>& point);
};

#endif // VISUALIZER_HPP
