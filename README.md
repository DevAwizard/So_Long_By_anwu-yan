![cover-so_long](https://github.com/DevAwizard/So_Long_By_anwu-yan/assets/153505451/acb2c3f8-657c-4bae-a123-38845b1484b8)

# So_long Documentation

### Table of Contents

1. [Description](#description)
2. [Objectives](#objectives)
3. [Features](#features)
   - [Game Mechanics](#game-mechanics)
   - [Graphics](#graphics)
   - [Sound (Bonus)](#sound-bonus)
4. [Development Environment](#development-environment)
   - [Tools and Technologies](#tools-and-technologies)
   - [System Requirements](#system-requirements)
5. [Code Structure](#code-structure)
   - [Directory Structure](#directory-structure)
   - [Key Files](#key-files)
6. [Implementation](#implementation)
7. [Testing](#testing)




### Description

The "so_long" project is a 2D game developed as part of the curriculum at 42. The game is a simple graphical adventure where the player navigates through a map, collecting items and avoiding obstacles. The main objective is to reach the exit after collecting all necessary items.

### Objectives

- Develop a basic understanding of 2D game mechanics.

- Learn to handle graphics and user inputs.

- Implement game logic and collision detection.

- Improve coding skills in C.


### Features

#### Game Mechanics

- **Player Movement**: The player can move up, down, left, and right using keyboard inputs.

- **Item Collection**: The player must collect all items (e.g., keys) to unlock the exit.

- **Obstacles**: There are static and dynamic obstacles that the player must avoid.

- **Exit Point**: The player wins by reaching the exit after collecting all required items.

#### Graphics

- Simple 2D tile-based graphics.

- Basic sprite animations for the player character and items.

- Smooth movement and collision detection.

#### Sound (Bonus)

- Background music.

- Sound effects for item collection, obstacles, and winning the game.

### Development environment


#### Tools and Technologies
- Programming Language: C

- **Graphics Library**: `MiniLibX` (a simplified version of the Xlib graphics library)

- **Development Environment**: Unix-based system (**`macOS`** or Linux)

- **Text Editor**: Vim, Emacs, or any other preferred editor

- **Version Control**: Git

#### System Requirements

- Unix-based operating system (**`macOS`** or Linux)

- Basic understanding of C programming

- MiniLibX library installed

### Code structure

#### Directory Structure

```bash
so_long/
├── includes/       # Header files
├── srcs/           # Source files
├── assets/         # Images and sound files
├── maps/           # Map files
├── Makefile        # Makefile to compile the project
└── README.md       # Project documentation
```

#### Key files (need to change)

- main.c: The entry point of the game.

- game.c: Contains the main game loop and logic.

- graphics.c: Handles rendering of graphics and animations.

- input.c: Manages user inputs and controls.

- map.c: Loads and parses map files.

### Implementation 


### Testing

- Player can move in all directions.

- Player can collect items.

- Player cannot move through obstacles.

- Game recognizes when all items are collected and the player reaches the exit.

- Game handles invalid inputs gracefully.


---
