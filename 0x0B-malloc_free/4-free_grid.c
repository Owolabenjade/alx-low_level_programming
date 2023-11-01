/*
 *  * Program: 0x0D. C - Preprocessor
 *   * File: 4-free_grid.c
 *    * Author: Benjamin
 *     * Description: This program defines a function `free_grid` that frees a 2D grid
 *      * previously created by the `alloc_grid` function. The program also includes a
 *       * test in `main.c` to demonstrate the usage of these functions.
 *        */

#include <stdlib.h>

/**
 *  * free_grid - Frees a 2D grid previously created by alloc_grid.
 *   * @grid: The pointer to the 2D grid to be freed.
 *    * @height: The height of the grid.
 *     *
 *      * Description: This function takes a pointer to a 2D grid and its height as input and
 *       * frees the memory allocated for the grid. It ensures that the memory is properly released
 *        * to avoid memory leaks. If the grid is NULL or the height is less than or equal to 0,
 *         * the function has no effect.
 *          */

void free_grid(int **grid, int height)
{
		if (grid != NULL && height > 0)
				{
							int i;
									for (i = 0; i < height; i++)
												{
																if (grid[i] != NULL)
																					free(grid[i]);
																		}
											free(grid);
												}
}
