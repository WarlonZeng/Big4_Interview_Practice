class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        string = ""
        reversed_string = ""
        
        for i in s:
            if i == " ":
                string = string[::-1]
                
                
                reversed_string += string
                reversed_string += " "
                string = ""
                continue
            
            string += i
            
        
        string = string[::-1]
        
        reversed_string += string
        
        
        return reversed_string
