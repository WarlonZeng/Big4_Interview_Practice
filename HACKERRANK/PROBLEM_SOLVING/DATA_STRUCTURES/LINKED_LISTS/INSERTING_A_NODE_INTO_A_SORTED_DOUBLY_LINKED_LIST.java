    // Complete the sortedInsert function below.

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
    static DoublyLinkedListNode sortedInsert(DoublyLinkedListNode head, int data) {
        
        if (head == null) {
            DoublyLinkedListNode node = new DoublyLinkedListNode(data);
            return node;
        }
        DoublyLinkedListNode node = head;
        while(node != null){
            if (node.data >= data){
                DoublyLinkedListNode i = new DoublyLinkedListNode(data);
                i.prev = node.prev;
                i.next = node;
                node.prev = i;
                if (i.prev == null){
                    return i;
                }
                else {
                    i.prev.next = i;
                    return head;
                }
            }
            if (node.next == null){
                DoublyLinkedListNode i = new DoublyLinkedListNode(data);
                i.prev = node;
                i.next = null;
                node.next = i;
                break;
            }
            node = node.next;
        }
        return head;
    }