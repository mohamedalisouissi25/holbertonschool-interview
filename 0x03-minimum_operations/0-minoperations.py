#!/usr/bin/python3
"""
a method that calculates the fewest number of operations.
"""


def minOperations(n):

    if n <= 1:
        return 0

    x = 2
    y = 0
    while x <= n:
        while n % x == 0:
            y += x
            n /= x
        x += 1
    return y
