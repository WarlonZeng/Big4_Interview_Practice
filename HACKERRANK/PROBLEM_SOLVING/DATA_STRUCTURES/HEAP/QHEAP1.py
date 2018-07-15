# Enter your code here. Read input from STDIN. Print output to STDOUT
import heapq
heap = []
n = int(raw_input())

running_mins = [float('inf')]
arr = []

for i in range(n):
    line = raw_input()
    line = line.split()
    line = map(int, line)
    
    if line[0] == 1:
        heapq.heappush(heap, line[1])
        
    elif line[0] == 2:
        i = heap.index(line[1])
        heap[i] = heap[-1]
        heap.pop()
        if i == 0: # time out cases 8, 9 take too long to heapify if root deleted
            heapq.heapify(heap)
        
    else:
        print heap[0]