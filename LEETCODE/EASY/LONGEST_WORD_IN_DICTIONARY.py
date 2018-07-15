class Solution(object):
    def longestWord(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        words.sort()
        
        s = []
        maxLen = 0
        
        r = ''
        s.append('')
        
        # words = ["a", "b", "banana", "app", "appl", "ap", "apply", "apple"]
        
    
        
        for i in words:
            if i[:-1] in s: # check if current leading alphabets are in registry

                
                if len(i) > maxLen:
                    maxLen = len(i)
                    r = i
                s.append(i)


        return r
