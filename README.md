![cover-so_long](https://github.com/DevAwizard/So_Long_By_anwu-yan/assets/153505451/acb2c3f8-657c-4bae-a123-38845b1484b8)

<div align="center">
<h1>So Long Documentation</h1>
<img src="https://img.shields.io/badge/42-%23000000.svg?&style=for-the-badge&logo=42&logoColor=white" /> <img src="https://img.shields.io/badge/c-%23A8B9CC.svg?&style=for-the-badge&logo=c&logoColor=black" /> <img src="https://img.shields.io/badge/markdown-%23000000.svg?&style=for-the-badge&logo=markdown&logoColor=white"><img src="https://img.shields.io/badge/macos-%23000000.svg?&style=for-the-badge&logo=macos&logoColor=white" />

</div>



https://github.com/DevAwizard/So_Long_By_anwu-yan/assets/153505451/ef4667c1-6e57-462f-9dbe-22a59cbccdc9





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

The **"`so_long"`** project is a 2D game developed as part of the curriculum at 42. The game is a simple graphical adventure where the player navigates through a map, collecting items and avoiding obstacles. The main objective is to reach the exit after collecting all necessary items.

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

```bash
so_long/
├── project/
│   ├── includes/       # Header files 
│   ├── srcs/           # Source files of C code, main, mini functions, and inside, minilib and libft
│   │   ├── ft_draw_map.c    # Key file: Draws the map
│   │   ├── ft_error.c       # Key file: Handles errors
│   │   ├── ft_error_map.c   # Key file: Handles map-specific errors
│   │   ├── ft_free_game.c   # Key file: Frees game resources
│   │   ├── ft_keyboard.c    # Key file: Manages keyboard input
│   │   ├── ft_play.c        # Key file: Main gameplay logic
│   │   ├── main.c           # Key file: Entry point of the game
│   │   ├── minilib/         # Mini library functions
│   │   └── libft/           # Libft functions
│   ├── xpm/                 # Pixel images, including a 'resources' subfolder with PNG files
│   │   ├── C.xpm            # Coin image
│   │   ├── Exit.xpm         # Exit image
│   │   ├── Floor.xpm        # Floor image
│   │   ├── P.xpm            # Player image
│   │   ├── Wall.xpm         # Wall image
│   │   └── resources/       # PNG versions of XPM images
│   │       ├── C.png
│   │       ├── Exit.png
│   │       ├── Floor.png
│   │       ├── P.png
│   │       ├── Wall.png
│   ├── maps/           # Map files
│   │   ├── map.ber
│   │   ├── map1.ber
│   │   ├── map2.ber
│   │   ├── map3.ber
│   │   ├── map_big.ber
│   │   ├── map_no_collection.ber
│   │   ├── map_no_exit.ber
│   │   ├── map_no_player.ber
│   │   ├── map_no_rect.ber
│   │   ├── map_wall_error.ber
│   ├── Makefile        # Makefile to compile the project
│   └── README.md       # Project documentation



```

#### Key files

**Srcs**

- **`main.c`**: The entry point of the game, responsible for initializing the game and starting the main loop.

- **`ft_draw_map.c`**: Contains functions responsible for drawing and rendering the game map on the screen.

- **`ft_error.c`**: Handles general error reporting and management within the game.

- **`ft_error_map.c`**: Manages errors specific to loading and parsing map files.

- **`ft_free_game.c`**:  Includes functions for freeing resources and memory used by the game to prevent memory leaks.

- **`ft_keyboard.c`**: Manages user input from the keyboard, including key press events and controls.

- **`ft_play.c`**: Contains the main game logic and gameplay functions.


**Maps**

- **`map.ber`**: Default map file used in the game.

- **`map1.ber`**: Alternate map file for additional level or variation in the game.

- **`map2.ber`**: Another alternate map file for further level variation.

- **`map3.ber`**: Additional map file for yet another level or variation.

- **`map_big.ber`**: Larger map file designed for a more extensive game level.

- **`map_no_collection.ber`**: Map file designed to test the game without collectible items.

- **`map_no_exit.ber`**: Map file designed to test the game without an exit.

- **`map_no_player.ber`**: Map file designed to test the game without a player starting point.

- **`map_no_rect.ber`**: Map file with a non-rectangular shape to test map validation.

- **`map_wall_error.ber`**: Map file with wall errors to test error handling in map validation.

### Implementation 


### Testing

- Player can move in all directions.

- Player can collect items.

- Player cannot move through obstacles.

- Game recognizes when all items are collected and the player reaches the exit.

- Game handles invalid inputs gracefully.


---
