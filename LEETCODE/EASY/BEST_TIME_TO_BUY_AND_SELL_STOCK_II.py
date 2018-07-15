class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        if len(prices) <= 1:
            return 0
        
        low = prices[0]
        high = prices[0]
        
        profit = 0
        
        for i in prices:
            
            if i < high:
                profit += high - low
                low = i
                high = i
                # print profit, i, high, low
            
            elif i > high:
                high = max(high, i)
        
        if high != low:
            profit += high - low
        
        return profit