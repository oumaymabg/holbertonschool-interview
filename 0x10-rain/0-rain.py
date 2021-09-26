#!/usr/bin/python3
"""
0. Rain
"""


def rain(walls):
    """
    Given a list of non-negative integers representing walls of width 1,
    calculate how much water will be retained after it rains.
    :param walls: is a list of non-negative integers.
    :return: Integer indicating total amount of rainwater retained.
    """
    length = len(walls)
    res = 0

    for i in range(1, length - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        right = walls[i]

        for j in range(i + 1, length):
            right = max(right, walls[j])

        res = res + (min(left, right) - walls[i])
    return res
