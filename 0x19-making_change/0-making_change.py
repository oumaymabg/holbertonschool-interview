#!/usr/bin/python3
"""
Make change using minimum coins given infinite amounts of some
denominations and a total to reach.
"""


def makeChange(coins, total):
    """
    Make change using minimum coins given infinite amounts of some
    denominations and a total to reach.
    """
    coins.sort(reverse=True)
    count = 0
    for coin in coins:
        count += total // coin
        total = total % coin
    if total:
        return -1
    return count