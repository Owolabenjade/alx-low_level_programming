#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of an island represented in a grid.
    
    :param grid: A list of list of integers where 0 represents water and 1 represents land.
    :return: The perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check up
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check down
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

