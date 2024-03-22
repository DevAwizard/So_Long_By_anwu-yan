# Essential C Libraries 

- **`<fcntl.h>`** - For the open function.
  
- **`<unistd.h>`** - For read, close, and write functions.
  
- **`<stdlib.h>`** - For malloc, free, and exit functions.
  
- **`<stdio.h>`** - While not directly mentioned for the functions you've listed, it's commonly included for file and error output functions such as perror.
  
- **`<string.h>`** - For strerror function, which gets the string representation of the current errno value.

- **`<math.h>`** - Incorporates a broad set of mathematical functions for arithmetic, trigonometry, and more. Use the -lm flag when compiling to link the math library.

- **`"mlx.h"`** - A simple library for creating graphical applications in X-Window or macOS/Unix environments. It's used for window management, drawing, and event handling. Linking miniLibX typically involves specific flags and depends on your development environment.

- **Custom Functions (e.g., ft_printf)** - For projects requiring custom implementations of standard functions like printf. Ensure to include the header file of your custom function and compile its source file alongside your main program files.


Here’s how you might typically include these in your C source file:

```c
#include <fcntl.h>  // For open
#include <unistd.h> // For read, close, write
#include <stdlib.h> // For malloc, free, exit
#include <stdio.h>  // For perror
#include <string.h> // For strerror
#include <math.h>   // For mathematical operations
#include "mlx.h"    // For MiniLibX, ensure correct path if necessary
```

---
