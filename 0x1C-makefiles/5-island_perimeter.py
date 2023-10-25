#!/usr/bin/python3
"""
    Island Perimeter
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    height = 0
    width = 0
    second_width = 0

    for row in grid:
        height_check = False

        for cell in row:
            if cell == 1:
                second_width += 1

            if cell == 1 and height_check is False:
                height_check = True
                height += 1

        if second_width > width:
            width = second_width
        second_width = 0

    return (2 * (height + width))
