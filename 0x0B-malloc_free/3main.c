#include <stdio.h>
#include "main.h"

int main(void)
{
		int **grid;
			int width = 3;
				int height = 4;

					grid = alloc_grid(width, height);

						if (grid == NULL)
								{
											printf("Failed to allocate the grid.\n");
													return (1);
														}

							printf("Grid contents:\n");
								for (int i = 0; i < height; i++)
										{
													for (int j = 0; j < width; j++)
																{
																				printf("%d ", grid[i][j]);
																						}
															printf("\n");
																}

									for (int i = 0; i < height; i++) /* Don't forget to free the allocated memory */
											{
														free(grid[i]);
															}
										free(grid);

											return (0);
}
