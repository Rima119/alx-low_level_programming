#!/usr/bin/python3
""" island_perimeter Module """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
        grid: list of list of integers
    """
    size = 0
    edge = 0
    for n in range(len(grid)):
        for m in range(len(grid[n])):
            if grid[n][m] == 1:
                size += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edge += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    edge += 1
    return size * 4 - edge * 2
