#!/bin/python

import math
import os
import random
import re
import sys

# Complete the isBalanced function below.
def isBalanced(s):
    
    if s == '':
        return 'YES'
    
    stack = []
    
    for i in s:
        if stack and stack[len(stack)-1] == '{' and i == '}':
            stack.pop()
        elif stack and stack[len(stack)-1] == '[' and i == ']':
            stack.pop()
        elif stack and stack[len(stack)-1] == '(' and i == ')':
            stack.pop()
        else:
            stack.append(i)
    
    if stack:
        return 'NO'
    else:
        return 'YES'
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        s = raw_input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()
