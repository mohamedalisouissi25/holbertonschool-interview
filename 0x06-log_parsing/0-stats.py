#!/usr/bin/python3
""" log parsing """

import sys
import re


def print_status(fsize, status_codes):
    """ Prints statics """
    print("File size: {}".format(filesize))
    for key in sorted(status.keys()):
        print("{}: {}".format(key, status[key]))


filesize = 0
status = {}

try:
    for i, j in enumerate(sys.stdin, 1):
        indx = len(j) - 1
        while indx > 0:
            if j[indx] == '\"':
                break
            indx -= 1
    data = j[indx + 1:].split()
    if len(data) > 1:
        filesize += int(data[1]) if data[1].isdigit() else 0
        if data[0].isdigit():
            if data[0] in status.keys():
                status[data[0]] += 1
            else:
                status[data[0]] = 1
        if i % 10 == 0:
            print_status(filesize, status)
except KeyboardInterrupt as e:
    print_status(filesize, status)
finally:
    print_status(filesize, status)
