"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)"""

def topView(root):
  #Write your code here
    left_half = []
    right_half = []
    arr = []
    
    start = root
    
    while root:
        left_half.append(root.data)
        root = root.left
    
    root = start.right
    
    while root:
        right_half.append(root.data)
        root = root.right
        
    arr = left_half[::-1] + right_half
        
    string = ""
    for i in arr:
        string += str(i) + ' '
    
    print string[:-1]
