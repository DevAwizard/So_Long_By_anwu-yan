![cover-so_long](https://github.com/DevAwizard/So_Long_By_anwu-yan/assets/153505451/acb2c3f8-657c-4bae-a123-38845b1484b8)

<div align="center">
<h1>So Long Documentation</h1>
<img src="https://img.shields.io/badge/42-%23000000.svg?&style=for-the-badge&logo=42&logoColor=white" /> <img src="https://img.shields.io/badge/c-%23A8B9CC.svg?&style=for-the-badge&logo=c&logoColor=black" /> <img src="https://img.shields.io/badge/markdown-%23000000.svg?&style=for-the-badge&logo=markdown&logoColor=white"><img src="https://img.shields.io/badge/macos-%23000000.svg?&style=for-the-badge&logo=macos&logoColor=white" />

</div>


https://github.com/DevAwizard/So_Long_By_anwu-yan/assets/153505451/ef4667c1-6e57-462f-9dbe-22a59cbccdc9

[![Progress](https://img.shields.io/badge/Progress-In%20Progress-yellow)](https://github.com/DevAwizard/Exams_42) 





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

**Introduction**

The implementation of the "so_long" project is divided into two key parts: **`Parsing`** and **`Integration`**. This structure ensures a systematic approach to building the application, starting from handling input data to integrating various components necessary for the project's functionality. BBelow is a guide on how to approach the implementation.



#### `1. Parsing`

**What is Parsing?**

Parsing is the process of analyzing a sequence of input data to determine its grammatical structure with respect to a given set of rules or a specific format. In the context of programming, parsing often involves reading data from a file or other input source, interpreting its structure, and converting it into a more usable format for further processing within a program.


**Key Aspects of Parsing in the "so_long" Project:**


1. **`Verify Argument Count`**: Ensure the number of arguments is exactly 2.

2. **`Check Filename Length`**: Verify that the length of the second argument is sufficient for a filename.

3. **`Validate File Extension`**: Check if the file extension is ".ber".

4. **`Open the .ber File`**: Open the specified .ber file for reading.

5. **`Read .ber File`**: Create a function to read the contents of the .ber file.

6. **`Memory Allocation`**: Allocate necessary memory based on the number of characters in the .ber map.

7. **`Close the .ber File`**: Close the .ber file after the initial read.

8. **`Reopen the .ber File`**: Reopen the .ber file to read its contents again.

9. **`Read File Descriptor`**: Read the file descriptor (fd) to process the file contents.

10. **Create `error.c`**:
    - **`Check_count_characters`**: Count and check characters.

    - **`Check characters map`**: Check valid characters in the map.

    - **`Check square`**: Ensure the map is square.

    - **`Check wall map`**: Verify the outer walls of the map.

    - **`Check Map Playability`**: Ensure the map is playable.

    - **`Check special characters`**: Specific checks for prohibited characters in the map.

      - Check for invalid counts of certain characters (C, E, P).

      - Confirm there is a valid starting position for the player.

12. **`Line-by-Line Parsing`**: Parse the file line by line to process and validate each part of the map individually.

13. **`Whitespace Handling`**: Handle and ignore any irrelevant whitespace or comments in the input file.

14. **`Map Dimensions Check`**: Ensure that the map dimensions are consistent and valid according to the game's requirements.

15. **`Pathfinding Validation`**: Implement an algorithm to check if there is a valid path from the player start position to all collectible items (C) and the exit (E).

16. **`Error Messages`**: Provide clear and informative error messages for different types of parsing errors to help with debugging.

17. **`Boundary Checks`**: Ensure that all accesses to the map data are within valid boundaries to prevent out-of-bounds errors.

18. **`Performance Considerations`**: Optimize the parsing process for performance, especially for larger maps, to ensure it runs efficiently.


#### `2. Integration`

Integration is the phase where various components such as XPM (X PixMap) handling, keyboard input processing, and the MiniLib library are brought together. This ensures that all individual components work together seamlessly to form the complete application.

**Key Aspects of Integration in the "so_long" Project:**

1. **Download MiniLib**:

   - **Operating Systems**: Ensure compatibility with macOS or Linux.

3. **MiniLib Integration**:

   - **Essential Functions**: Utilize key MiniLib functions such as:
     - `mlx_init()`: Initialize MiniLib.
     - `mlx_new_window()`: Create a new window.
     - `mlx_new_image()`: Create a new image.
     - `mlx_loop_hook()`: Set up the main loop hook.
     - `mlx_loop()`: Start the MiniLib event loop.
     - `mlx_key_hook()`: Handle keyboard events.
     - `mlx_destroy_window()`: Destroy the window and free associated resources.

4. **Display Images**:

   - **Image Selection**: Choose `.xpm` files for the following game elements:
     - `wall`
     - `character`
     - `floor`
     - `collectible`
     - `exit`

5. **Keyboard Handling**:
   - **Player Movement**: Implement keyboard controls to move the player within the game.

6. **Game Exit Handling**:

   - **Exit Conditions**: Implement functionality to handle game exit through various methods:

     - Pressing `esc`

     - Clicking the window's close button (marking the x)

     - Handling system interrupts like `Ctrl+Z`

7. **Memory Management**:
   - **Free Allocated Memory**: Ensure all allocated memory is properly freed to avoid memory leaks.


### Testing

- Player can move in all directions.

- Player can collect items.

- Player cannot move through obstacles.

- Game recognizes when all items are collected and the player reaches the exit.

- Game handles invalid inputs gracefully.



---
