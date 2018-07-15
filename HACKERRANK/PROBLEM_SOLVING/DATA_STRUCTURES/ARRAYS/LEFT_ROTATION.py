#!/bin/python

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    nd = raw_input().split()

    n = int(nd[0])

    d = int(nd[1])

    a = map(int, raw_input().rstrip().split())
    
    if a == []:
        print []

    new = []

    d = d % len(a)
    new = a[d:] + a[:d]
    
    ans = ''
    for i in new:
        ans += str(i) + ' '
        
    ans = ans[:-1]
    print ans
