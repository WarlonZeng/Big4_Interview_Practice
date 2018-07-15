"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)"""

def insert(root,val):
    #Enter you code here.
    if root == None:
        return Node(val)
    else:
        if val <= root.data:
            current = insert(root.left, val)
            root.left = current
        else:
            current = insert(root.right, val)
            root.right = current
    return root
                
    
