#!/bin/python

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    sums = []
    
    for i in range(1, len(arr)-1):
        for j in range(1, len(arr)-1):
            sum = 0
            sum += arr[i-1][j-1]
            sum += arr[i-1][j]
            sum += arr[i-1][j+1]
            sum += arr[i][j]
            sum += arr[i+1][j-1]
            sum += arr[i+1][j]
            sum += arr[i+1][j+1]
            sums.append(sum)
    
    return max(sums)
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in xrange(6):
        arr.append(map(int, raw_input().rstrip().split()))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
