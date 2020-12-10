#!/usr/bin/python3
"""[boxes]"""



def canUnlockAll(boxes):

    lock_boxes = [0]
    for box in range(len(boxes)):
        for key in boxes[box]:
            if key not in lock_boxes
                if key != box
                    if key < len(boxes):
                    lock_boxes.append(key)
    if len(lock_boxes) == len(boxes):
        return True
    return False
