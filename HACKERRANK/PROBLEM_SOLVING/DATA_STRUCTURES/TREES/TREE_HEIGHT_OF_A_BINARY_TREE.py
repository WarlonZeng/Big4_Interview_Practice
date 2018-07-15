# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):
    
    heights = []
    stack = []
    stack.append(root)
    heights.append(0)
    max_height = 0
    height = 0
    
    while stack:
        max_height = max(max(heights), height)
        root = stack.pop()
        height = heights.pop()
        
        # print(heights)
        # print(root.info)
        if root.right:
            stack.append(root.right)
            heights.append(height + 1)
        if root.left:
            stack.append(root.left)
            root = root.left
            heights.append(height + 1)
            continue
            
        if root.right:
            root = root.right
        
    return max_height
