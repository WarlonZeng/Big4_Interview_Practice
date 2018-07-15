#!/bin/python

from __future__ import print_function

import os
import sys
import heapq

median = 0
maxHeap = [] # left
minHeap = [] # right
    
def get_median():
    global median
    
    return median

def add_number(n):
    global median
    global maxHeap
    global minHeap
    
    if n > median:
        heapq.heappush(minHeap, n)
        if len(minHeap) - len(maxHeap) > 1:
            curr = heapq.heappop(minHeap)
            heapq.heappush(maxHeap, -curr)
            
        median = minHeap[0]
        
    else:
        heapq.heappush(maxHeap, -n)
            
        if len(maxHeap) - len(minHeap) > 1:
            curr = heapq.heappop(maxHeap)
            heapq.heappush(minHeap, -curr)
            
        median = -maxHeap[0]
        
    if len(minHeap) == len(maxHeap):
        median = float(minHeap[0] + -maxHeap[0]) / 2.0


#
# Complete the runningMedian function below.
#
def runningMedian(a):
    res = []
    
    for i in a:
        add_number(i)
        res.append(get_median())
    
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a_count = int(raw_input())
    
    a = []

    for _ in xrange(a_count):
        a_item = int(raw_input())
        a.append(a_item)

    result = runningMedian(a)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
