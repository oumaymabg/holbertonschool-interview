#!/usr/bin/python3
"""
lockboxes , we have n number  of locked boxes in front of you.
 Each box is numbered sequentially from 0 to
 n - 1 and each box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    '''determines if all the boxes can be opned'''
    valide = 'true'
    open = [0]
    for i in open:
        for boxes in box[i]:
            if boxes not in open:
                if boxes < len(box):
                    open.append(boxes)
if len(open) == len(box):
    return True
return False
