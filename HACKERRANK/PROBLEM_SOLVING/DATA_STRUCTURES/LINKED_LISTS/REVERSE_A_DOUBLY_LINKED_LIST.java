    // Complete the reverse function below.

    /*
     * For your reference:
     *
     * DoublyLinkedListNode {
     *     int data;
     *     DoublyLinkedListNode next;
     *     DoublyLinkedListNode prev;
     * }
     *
     */
    static DoublyLinkedListNode reverse(DoublyLinkedListNode head) {
        // 1->2->3->4->NULL
        // 4->3->2->1->NULL
        
        DoublyLinkedListNode tmp_prev = head;
        DoublyLinkedListNode tmp_next = head;
        DoublyLinkedListNode tmp = head;
        DoublyLinkedListNode thing = head;
        
        while (head != null) {

            tmp_prev = head.prev;
            tmp_next = head.next;
            
            head.prev = tmp_next;
            head.next = tmp_prev;
            head = head.prev;
            
        }
        
        while (thing.prev != null) {
            thing = thing.prev;
        }
        
        return thing;
    }