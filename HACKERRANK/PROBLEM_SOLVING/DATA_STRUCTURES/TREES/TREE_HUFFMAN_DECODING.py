"""class Node:
    def __init__(self, freq,data):
        self.freq= freq
        self.data=data
        self.left = None
        self.right = None
"""        

# Enter your code here. Read input from STDIN. Print output to STDOUT
def decodeHuff(root , s):
	#Enter Your Code Here
    
    letters = ''
    start = root
    
    # s="1001011"
    for i in s:
        
        if not root.left and not root.right:
            letters += root.data
            root = start
        
        if i == '1' and root.right:
            root = root.right
        elif i == '0' and root.left:
            root = root.left

                
    letters += root.data
    print letters
    
    
