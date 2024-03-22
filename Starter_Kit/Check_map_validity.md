# Check the validity the structure eand contents of my map

### Map Creation

Your map can be a simple text file where different characters represent various elements of the game. For example:

```bash
1 could represent walls.
0 could represent empty space.
C for collectibles.
E for the exit.
P for the player's starting position.
```



### Main function overview

int main(int argc, char **argv) 
{
    // Step 1: Check command-line arguments
    First, ensure the correct number of arguments is passed to your program. 
    For a map-checking program, you typically expect at least one argument besides the program name itself (the path to the map file).

    // Step 2: Open the map file
    Next, attempt to open the map file specified by the command-line argument.
    
    // Step 3: Read and validate the map
    As you read the file, you'll want to implement several checks to validate the map:

    - Ensure all lines are of equal length (rectangular map).
    - Verify the map is surrounded by walls (1).
    - Check that there is exactly one player (P), at least one collectible (C), and exactly one exit (E).
    
    This step involves reading each line, analyzing its contents, and keeping track of what you find (e.g., counts of P, C, E, ensuring boundary conditions).
    
    // Step 4: Close the file
    Don't forget to close the file once you're done with it.

    // Step 5: Return based on map validity
    Finally, return an appropriate value based on whether the map is valid or not. You might return 0 for success (valid map) and 1 (or another non-zero value) to indicate an error (invalid map).


    return 0; // Example: assuming the map is valid
}

---
