#!/usr/bin/python3
"""a method that determines if a given data set represents a valid UTF-8 encoding"""



def validUTF8(data):
    try:
        bytes(data).decode(encoding="UTF-8", errors="strict")
        return True
    except:
        return False
