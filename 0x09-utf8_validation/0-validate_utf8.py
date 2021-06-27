#!/usr/bin/python3
"""UTF-8 encoding"""


def validUTF8(data):
    try:
        bytes(data).decode(encoding="UTF-8", errors="strict")
        return True
    except:
        return False
