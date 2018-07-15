""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""

stack = []

def inOrder(root, stack=[]):
    if root.left:
        inOrder(root.left, stack)
    stack.append(root.data)
    if root.right:
        inOrder(root.right, stack)

        
def check_binary_search_tree_(root):
    inOrder(root, stack)
    length = len(stack)
    for i in range(length-1):
        if stack[i] >= stack[i+1]:
            return False
    return True
    
