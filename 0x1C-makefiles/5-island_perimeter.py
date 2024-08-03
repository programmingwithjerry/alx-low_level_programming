#!/usr/bin/python3
"""
    function def island_perimeter(grid): that returns
    the perimeter of the island
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    The grid is a list of lists where:
    - 0 represents a water zone.
    - 1 represents a land zone.

    The function assumes:
    - The grid is rectangular with width and height not
    - exceeding 100.
    - The grid is surrounded by water.
    - There is exactly one island (or nothing), and the island does
    - not have lakes.

    Args:
        grid (list of list of int): 2D grid representing
        the map of land and water.

    Returns:
        int: The perimeter of the island.

    Examples:
        >>> grid = [
        ...     [0, 1, 0, 0],
        ...     [1, 1, 1, 0],
        ...     [0, 1, 0, 0],
        ...     [0, 0, 0, 0]
        ... ]
        >>> island_perimeter(grid)
        12
    """
    # Initialize perimeter count
    perimeter = 0

    # Get the number of rows and columns in the grid
    rows = len(grid)
    cols = len(grid[0])

    # Iterate through each cell in the grid
    for r in range(rows):
        for c in range(cols):
            # Check if the current cell is land
            if grid[r][c] == 1:
                # Start with the maximum possible perimeter for a land cell
                cell_perimeter = 4

                # Check the cell above
                if r > 0 and grid[r - 1][c] == 1:
                    cell_perimeter -= 1

                # Check the cell below
                if r < rows - 1 and grid[r + 1][c] == 1:
                    cell_perimeter -= 1

                # Check the cell to the left
                if c > 0 and grid[r][c - 1] == 1:
                    cell_perimeter -= 1

                # Check the cell to the right
                if c < cols - 1 and grid[r][c + 1] == 1:
                    cell_perimeter -= 1

                # Add the cell's perimeter to the total perimeter
                perimeter += cell_perimeter

    return perimeter
