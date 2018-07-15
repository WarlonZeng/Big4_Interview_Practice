#!/bin/python

import math
import os
import random
import re
import sys

# Complete the birthdayCakeCandles function below.
def birthdayCakeCandles(arr):
    count = 0
    height = max(arr)
    
    for i in arr:
        if i == height:
            count += 1
            
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(raw_input())

    ar = map(int, raw_input().rstrip().split())

    result = birthdayCakeCandles(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
