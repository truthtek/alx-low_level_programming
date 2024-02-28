#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island described in grid.

    Args:
        grid: list of list of integers, where 0 represents water zone and 1 represents land zone.

    Returns:
        The perimeter of the island.
    """
    # Initialize perimeter to 0
    perimeter = 0

    # Iterate through each row in the grid
    for i in range(len(grid)):
        # Iterate through each column in the row
        for j in range(len(grid[i])):
            # Check if the current cell is land
            if grid[i][j] == 1:
                # Check if the cell to the left is water or outside the grid
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check if the cell to the right is water or outside the grid
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check if the cell above is water or outside the grid
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check if the cell below is water or outside the grid
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
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
