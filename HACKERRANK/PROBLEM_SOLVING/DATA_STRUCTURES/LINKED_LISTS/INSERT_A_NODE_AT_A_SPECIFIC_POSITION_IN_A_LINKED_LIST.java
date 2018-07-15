    // Complete the insertNodeAtPosition function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data, int position) {
        // 16, 3, 7
        // 16, 3, 1, 7
        // insert 1. at 2. 0 index start.
        // pos = 0, move 0 times
        // pos = 1, move 1 times
        
        SinglyLinkedListNode start = head;
        
        if (position == 0) {
            SinglyLinkedListNode edge = new SinglyLinkedListNode(data);
            edge.next = head;
            return edge;
        }
        
        for (int i = 0; i < position-1; i++) {
            head = head.next;
        }
        
        SinglyLinkedListNode tmp = head.next;
        head.next = new SinglyLinkedListNode(data);
        head.next.next = tmp;
        
        return start;
    }