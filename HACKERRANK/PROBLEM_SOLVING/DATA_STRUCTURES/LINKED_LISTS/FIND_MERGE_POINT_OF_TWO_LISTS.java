    // Complete the findMergeNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static int findMergeNode(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        
        // 1, 2, 3
        // 1, 3
        
        SinglyLinkedListNode tmp = head2;
        
        while (head1 != null) {
            if (head2 == null) {
                head1 = head1.next;
                head2 = tmp;
            }
            if (head1 == head2) {
                return head1.data;
            }
            head2 = head2.next;
        }
        
        return 0;
    }