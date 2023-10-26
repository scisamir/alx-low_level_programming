#!/usr/bin/python3
"""
    Island Perimeter
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    height = 0
    width = 0

    width_pos_list = []

    grid_height = len(grid)
    grid_width = len(grid[0]) if grid_height else 0

    for i in range(grid_height):
        height_check = False

        for j in range(grid_width):
            if grid[i][j] == 1 and j not in width_pos_list:
                width += 1
                width_pos_list.append(j)

            if grid[i][j] == 1 and height_check is False:
                height_check = True
                height += 1

    return (2 * (height + width))
