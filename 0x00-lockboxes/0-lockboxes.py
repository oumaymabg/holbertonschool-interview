#!/usr/bin/python3
"""
lockboxes , we have n number  of locked boxes in front of you.
 Each box is numbered sequentially from 0 to
 n - 1 and each box may contain keys to the other boxes."""

def canUnlockAll(boxes):
    """determines if all the boxes can be opned"""
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

def AjoutOpen(open):
    print ('test3')
    for i in range (1, len(open) ):
        print ('test4')
        for j in range (1, len(boxes)):
            print ('test5')
            if j == open[i]:
                print ('test6')
                if isinstance(boxes[j], open):
                    print ('test7')
                    open.append(j)
