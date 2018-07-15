    // Complete the removeDuplicates function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode removeDuplicates(SinglyLinkedListNode head) {
        
        SinglyLinkedListNode tmp = head;
        
        while (head != null) {
            if (head.next != null && head.data == head.next.data) {
                head.next = head.next.next;
            }
            else {
                head = head.next;
            }
        }

        return tmp;
    }