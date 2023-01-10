0x0B. C-malloc,free
0. Write a function that creates an array of chars, and initializes it with a specific char.
   Prototype: char *create_array(unsigned int size, char c);
   Returns NULL if size = 0
   Returns a pointer to the array, or NULL if it fails

1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

2. Write a function that concatenates two strings.

3. Write a function that returns a pointer to a 2 dimensional array of integers.

4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
   Prototype: void free_grid(int **grid, int height);
   Note that we will compile with your alloc_grid.c file. Make sure it compiles.
