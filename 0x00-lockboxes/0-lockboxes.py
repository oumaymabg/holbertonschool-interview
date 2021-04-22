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
    while(len(open) != len(boxes)):
        print ('test1')
        AjoutOpen(open)
        print ('test2')
    if (len(open) == len(boxes)):
        print ('true')
    else:
        print ('false')