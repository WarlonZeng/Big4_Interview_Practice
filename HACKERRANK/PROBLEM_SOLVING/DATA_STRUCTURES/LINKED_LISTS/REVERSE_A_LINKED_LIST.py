# Complete the reverse function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def reverse(head):
    prev = None
    curr = head

    while (curr is not None):
        next = curr.next
        curr.next = prev 
        prev = curr
        curr = next

    return prev
