#!/usr/bin/python3
"""
function def island_perimeter grid
that returns the perimeter of the island described in grid

"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the grid.
    Args: grid: list of list of integers
    Returns: integer that is The perimeter of the island.

    """

    resultat = 0

    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                resultat += 4  # Add 4 sides initially

                if c > 0 and grid[r][c - 1] == 1:
                    resultat -= 2

                if r > 0 and grid[r - 1][c] == 1:
                    resultat -= 2

    return (resultat)
