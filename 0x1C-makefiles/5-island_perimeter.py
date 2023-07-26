#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of an island
    which is a rectangle
    """
    length = 0
    width = 0
    number = 0
    for row in grid:
        for num in range(len(row)):
            if row[num] == 0:
                continue
            elif row[num] == 1:
                number += 1
        if number > width:
            width = number
        if number > 0:
            length += 1
        number = 0
    print(length, width)
    total = length + width
    perimeter = 2 * total
    return perimeter
