# openGL Driving Simulator
A minimal driving simulator built using C++ and OpenGL (GLUT).
This project demonstrates basic 2D rendering, object movement, and user input handling in a graphics environment.

## Features
- Road rendering with lane markings  
- Player-controlled car  
- Keyboard-based movement  
- Acceleration and braking  
- Real-time updates using GLUT
---

## Controls

| Key        | Action        |
|------------|--------------|
| `←` / `A`  | Move left    |
| `→` / `D`  | Move right   |
| `↑` / `W`  | Accelerate   |
| `↓` / `S`  | Brake        |

## Core Concepts

- OpenGL rendering (primitives and frame drawing)
- 2D orthographic projection
- Game loop using GLUT timers
- Keyboard input handling (event-driven)
- Object-oriented structure (Car, Road)
- State-based movement (position, speed)
---

## Project Structure

```bash
open-GL-master/
├── src/
│   ├── main.cpp        # Entry point and rendering loop
│   ├── car.cpp         # Car logic and movement
│   └── road.cpp        # Road rendering logic
├── include/
│   ├── car.h           # Car class definition
│   └── road.h          # Road class definition
├── build/              # Compiled binaries (ignored)
├── README.md           # Project documentation
└── .gitignore
```
Compiled libraries are excluded via `.gitignore`.

## How It Works

- The road is rendered statically with dashed lane markings.
- The car:
  - Moves horizontally based on user input
  - Moves forward continuously through an update loop
- A timer (`glutTimerFunc`) updates the simulation approximately every 16ms (~60 FPS), enabling smooth motion.

---

## Build & Run

### Requirements

- C++ compiler (e.g., `g++`)
- OpenGL
- GLUT (FreeGLUT recommended)

### Compile (Linux example)

```bash
g++ src/main.cpp src/car.cpp src/road.cpp -Iinclude -lGL -lGLU -lglut -o build/simulator
./build/simulator
```

## Possible Improvements

- Collision detection
- Scrolling road (treadmill effect)
- Multiple driving modes (e.g., sleepy, drunk, speeding)
- UI for mode selection
- Improved physics (friction, smoother steering)

---

## Notes

This project serves as a foundational graphics implementation and is useful for:

- Learning OpenGL fundamentals
- Understanding real-time simulation and game loops
- Building toward more advanced driving or game simulations