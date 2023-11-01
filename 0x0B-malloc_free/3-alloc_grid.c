/*
 *  * Program: 0x0D. C - Preprocessor
 *   * File: 3-alloc_grid.c
 *    * Author: Benjamin
 *     * Description: This program defines a function `alloc_grid` that allocates a 2D
 *      * array of integers with all elements initialized to 0. The function takes two
 *       * parameters, `width` and `height`, which determine the dimensions of the grid.
 *        * If either the `width` or `height` is less than or equal to 0, or if memory
 *         * allocation fails, the function returns NULL.
 *          */

#include <stdlib.h>

/**
 *  * alloc_grid - Allocates a 2D array of integers with all elements initialized to 0.
 *   * @width: The width of the grid.
 *    * @height: The height of the grid.
 *     *
 *      * Description: This function dynamically allocates memory for a 2D array of integers
 *       * with the specified width and height. Each element of the grid is initialized to 0.
 *        * If the width or height is less than or equal to 0, or if memory allocation fails,
 *         * the function returns NULL.
 *          *
 *           * Return: On success, returns a pointer to the allocated 2D grid. Returns NULL on failure.
 *            */

int **alloc_grid(int width, int height)
{
		int **grid;
			int i, j;

				if (width <= 0 || height <= 0)
							return NULL;

					grid = (int **)malloc(height * sizeof(int *));
						if (grid == NULL)
									return NULL;

							for (i = 0; i < height; i++)
									{
												grid[i] = (int *)malloc(width * sizeof(int));
														if (grid[i] == NULL)
																	{
																					for (j = 0; j < i; j++)
																										free(grid[j]);
																								free(grid);
																											return NULL;
																													}
															}

								for (i = 0; i < height; i++)
										{
													for (j = 0; j < width; j++)
																{
																				grid[i][j] = 0;
																						}
														}

									return grid;
}
