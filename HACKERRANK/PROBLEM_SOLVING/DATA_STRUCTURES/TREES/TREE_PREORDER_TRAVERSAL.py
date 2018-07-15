"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.info (the value of the node)
"""
def preOrder(root):
    #Write your code here
    
    arr = []
    stack = []
    
    stack.append(root)
    while stack:
        root = stack.pop()
        arr.append(root.info)
        
        if root.right:
            stack.append(root.right)
        if root.left:
            stack.append(root.left)
            root = root.left
            continue
        if root.right:
            root = root.right
        
    string = ''
    for i in arr:
        string += str(i) + ' '
        
    print(string[:-1])
    
