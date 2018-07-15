#!/bin/python

import math
import os
import random
import re
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
    global minHeap
    global maxHeap
    
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


if __name__ == '__main__':
    n = int(raw_input())

    for _ in xrange(n):
        a_item = int(raw_input())
        
        add_number(a_item)
        median = get_median()
        
        print float(median)
