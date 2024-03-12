CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system


# Project files
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:src/%.cpp=bin/%.o)
EXECUTABLE = bin/GradientDescentVisualizer

# Build the project
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@ $(LDLIBS)

# Compile source files into object files
bin/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f bin/* $(EXECUTABLE)

# Debug option
debug: CXXFLAGS += -g
debug: all
