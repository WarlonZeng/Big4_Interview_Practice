class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        roman_map = {}
        
        roman_map[''] = float('inf')
        
        roman_map['I'] = 1
        roman_map['V'] = 5
        
        roman_map['X'] = 10
        roman_map['L'] = 50
        
        roman_map['C'] = 100
        roman_map['D'] = 500
        
        roman_map['M'] = 1000
        
        num = 0
        prev = ''
        
        for i in s:
            
            if roman_map[prev] < roman_map[i]:
                num += -roman_map[prev] + roman_map[i] + -roman_map[prev]
            else:
                num += roman_map[i]
                
            prev = i
            
        return num