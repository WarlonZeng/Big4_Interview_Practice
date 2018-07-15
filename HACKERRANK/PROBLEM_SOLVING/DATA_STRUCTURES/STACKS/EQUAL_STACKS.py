#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the equalStacks function below.
#
def equalStacks(h1, h2, h3):
    #
    # Write your code here.
    #
    h1 = h1[::-1]
    h2 = h2[::-1]
    h3 = h3[::-1]
    running_h1_sum = [0]
    running_h2_sum = [0]
    running_h3_sum = [0]
    for i in h1:
        nxt = running_h1_sum[-1] + i
        running_h1_sum.append(nxt)
        
    for i in h2:
        nxt = running_h2_sum[-1] + i
        running_h2_sum.append(nxt)
    
    for i in h3:
        nxt = running_h3_sum[-1] + i
        running_h3_sum.append(nxt)
        
    arr = []
    arr.append(running_h1_sum[-1])
    arr.append(running_h2_sum[-1])
    arr.append(running_h3_sum[-1])
    
    while True:
        x = max(arr)
        y = min(arr)
        if x != y:
            index = arr.index(x)
            
            if index == 0:
                arr[index] = running_h1_sum.pop()
            elif index == 1:
                arr[index] = running_h2_sum.pop()
            else:
                arr[index] = running_h3_sum.pop()
        else:
            return x
        # print('------------------')
        # print(running_h1_sum)
        # print(running_h2_sum)
        # print(running_h3_sum)
        # print(x)
        # print(y)
        # print(arr)
    
    return 0

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n1N2N3 = raw_input().split()

    n1 = int(n1N2N3[0])

    n2 = int(n1N2N3[1])

    n3 = int(n1N2N3[2])

    h1 = map(int, raw_input().rstrip().split())
    h2 = map(int, raw_input().rstrip().split())
    h3 = map(int, raw_input().rstrip().split())

    result = equalStacks(h1, h2, h3)

    fptr.write(str(result) + '\n')

    fptr.close()
