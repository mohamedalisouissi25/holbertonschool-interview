#!/usr/bin/python3
"""[boxes]"""


def canUnlockAll(boxes):
    """"unlock boxes"""
    locked_boxes = [0]
    for box in boxes:
        for key in box:
            lockedboxes.append(key)

    for key in range(len(boxes)):
        if key in boxes[key]:
            if lockedboxes.count(key) == 1:
                return False
    return True


















