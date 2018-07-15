    // Complete the getNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static int getNode(SinglyLinkedListNode head, int positionFromTail) {
        Vector<Integer> vec = new Vector<>();
        
        while (head != null) {
            vec.add(head.data);
            head = head.next;
        }
        
        return vec.get(vec.size() -1 -positionFromTail);

    }