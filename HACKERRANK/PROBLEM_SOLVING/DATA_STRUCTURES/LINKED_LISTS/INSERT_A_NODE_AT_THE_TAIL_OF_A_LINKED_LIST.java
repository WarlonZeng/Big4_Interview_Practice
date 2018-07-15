    // Complete the insertNodeAtTail function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode head, int data) {
        SinglyLinkedListNode new_node = new SinglyLinkedListNode(data);
 
        if (head == null)
        {
            head = new SinglyLinkedListNode(data);
            return head;
        }
 
        new_node.next = null;
 
        SinglyLinkedListNode last = head; 
        while (last.next != null)
            last = last.next;
 
        last.next = new_node;
        return head;
        
    }
