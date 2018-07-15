    // Complete the deleteNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode deleteNode(SinglyLinkedListNode head, int position) {
        // 20->6->2->19->7->4->15->9
        // 20->6->2->7->4->15->9
        // position = 3
        
        SinglyLinkedListNode tmp = head;
        
        if (position == 0) {
            return head.next;
        }
        
        for (int i = 0; i < position-1; i++) {
            head = head.next;
        }
        
        head.next = head.next.next;
        
        return tmp;
    }