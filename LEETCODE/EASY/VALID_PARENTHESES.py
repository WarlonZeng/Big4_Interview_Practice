class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        stack = []
        
        for i in s:
            if stack and stack[-1] == '{' and i == '}':
                stack.pop()
            elif stack and stack[-1] == '[' and i == ']':
                stack.pop()
            elif stack and stack[-1] == '(' and i == ')':
                stack.pop()
            else:
                stack.append(i)
            
            # print i, 
            
        if stack:
            return False
        
        return True
