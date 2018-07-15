#!/bin/python3

import os
import sys

#
# Complete the dynamicArray function below.
#
def dynamicArray(n, queries):
    #
    # Write your code here.
    #
    seqList = []
    for _ in range(n):
        seqList.append([])
    lastAns = 0
    
    ans = []
    
    for i in queries:
        q = i[0]
        x = i[1]
        y = i[2]
        
        index = (x ^ lastAns) % n
        seq = seqList[index]
        if q == 1:
            seq.append(y)
        elif q == 2:
            size = len(seq)
            lastAns = seq[y % size]
            ans.append(lastAns)
            
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nq = input().split()

    n = int(nq[0])

    q = int(nq[1])

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = dynamicArray(n, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
