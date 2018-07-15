class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        if len(prices) <= 1: 
            return 0
        
        low = float('inf')
        high = float('-inf')
        
        for i in prices:
            
            low = min(low, i)
            high = max(high, i - low)
        
        return high