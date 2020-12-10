#!/usr/bin/python3
"""[boxes]"""


def canUnlockAll(boxes):
    """unlock boxes"""
    if len(boxes) == 1:
        return True
    lockedboxes = []
    for box in boxes:
        for key in box:
            lockedboxes.append(key)
    for key in range(len(boxes)):
        if key in boxes[key] and if lockedboxes.count(key) == 1:
                return False
    return True
