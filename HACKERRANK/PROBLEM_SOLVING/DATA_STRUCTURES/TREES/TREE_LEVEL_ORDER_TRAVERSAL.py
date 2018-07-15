"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def levelOrder(root):
	#Write code Here
    arr = []
    stack = []
    
    stack.append(root)
    while stack:
        root = stack.pop(0)
        arr.append(root.data)
        
        if root.left:
            stack.append(root.left)
        if root.right:
            stack.append(root.right)
        if root.left:
            root = root.left
            continue
        if root.right:
            root = root.right
            continue
    
    string = ''
    
    for i in arr:
        string += str(i) + ' '
    
    print string[:-1]
    
