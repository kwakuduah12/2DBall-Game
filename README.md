# 2DBall-Game

## Project Description
This project is a simple 2D ball game developed in C++ using the OpenGL library for rendering and Box2D for physics simulation. Players control a ball to navigate through various obstacles and collect items to gain points.

## Features
- **Player Control**: Players can control the ball using keyboard arrows to navigate through the game environment.
- **Physics Simulation**: Utilizes Box2D to manage realistic movement and collision effects.
- **Scoring System**: Players earn points by collecting objects and completing levels.

## Installation

### Prerequisites
Before you start, ensure you have the following installed:
- C++ Compiler (GCC recommended)
- OpenGL
- GLUT
- Box2D
- stb_image (for image handling)

### Libraries Installation
Follow these steps to install the necessary libraries:
1. **OpenGL**:
   - Typically comes pre-installed on most operating systems.
2. **GLUT**:
   - Used for creating and managing windows.
3. **Box2D**:
   - Install via Homebrew with the command: 
     ```
     brew install box2d
     ```
4. **stb_image**:
   - Download `stb_image.h` from [stb's GitHub repository](https://github.com/nothings/stb) and include it in your project directory.

### Compiling the Game
Compile the game using the provided Makefile. Navigate to the project directory in your terminal and run:
```bash
make
