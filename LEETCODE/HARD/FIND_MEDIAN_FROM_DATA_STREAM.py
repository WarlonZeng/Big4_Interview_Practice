import heapq
class MedianFinder(object):

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.maxHeap = [] # max heap with negative numbers, left side of array
        self.minHeap = [] # min heap with positive numbers, right side of array
        self.median = 0

        
    def addNum(self, num):
        """
        :type num: int
        :rtype: void
        """
        
        if num > self.median:
            heapq.heappush(self.minHeap, num) # right side of the array
            
            if len(self.minHeap) - len(self.maxHeap) > 1:
                curr = heapq.heappop(self.minHeap)
                heapq.heappush(self.maxHeap, -curr)
            
            self.median = self.minHeap[0]
        
        else:
            heapq.heappush(self.maxHeap, -num) # left side of the array
            
            if len(self.maxHeap) - len(self.minHeap) > 1:
                curr = heapq.heappop(self.maxHeap)
                heapq.heappush(self.minHeap, -curr)
            
            self.median = -self.maxHeap[0]
        
        if len(self.minHeap) == len(self.maxHeap):
            self.median = float(self.minHeap[0] + -self.maxHeap[0]) / 2.0

    def findMedian(self):
        """
        :rtype: float
        """
        return self.median
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
