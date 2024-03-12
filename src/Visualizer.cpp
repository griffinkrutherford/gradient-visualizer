// In src/Visualizer.cpp

#include <cmath>
#include "Visualizer.hpp"

void Visualizer::visualize(const Function& function, const std::vector<double>& point) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Gradient Descent Visualization");

    sf::VertexArray lines(sf::LinesStrip, 2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Example of drawing a line - Adapt this to draw your function and gradient descent path
        lines[0].position = sf::Vector2f(100, 100);
        lines[1].position = sf::Vector2f(700, 500);

        lines[0].color = sf::Color::Red;
        lines[1].color = sf::Color::Red;

        window.draw(lines);

        window.display();
    }
}
