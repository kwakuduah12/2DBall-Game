# Makefile for the 2D Ball Game project

CXX = g++
CXXFLAGS = -Wall -std=c++11 -I/usr/local/include -I 
LDFLAGS = -L/usr/local/lib -lbox2d -lglut -lGL

# List of source files
SOURCES = main.cpp Game.cpp windowManager.cpp inputManager.cpp renderer.cpp levelManager.cpp physicsManager.cpp soundManager.cpp assetManager.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = game

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: all clean
