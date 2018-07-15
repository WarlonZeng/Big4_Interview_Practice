    // Complete the reversePrint function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static void reversePrint(SinglyLinkedListNode head) {
        // 16 -> 12 -> 4 -> 2 -> 5
        // 5 -> 2 -> 4 -> 12 -> 16
        Vector<SinglyLinkedListNode> vec = new Vector<>();
        
        while (head != null) {
            vec.add(head);
            head = head.next;
        }
        
        Collections.reverse(vec);
        
        for (int i = 0;; i++) {
            if (i+1 != vec.size()) {
                vec.get(i).next = vec.get(i+1).next;
            }
            else {
                vec.get(i).next = null;
                break;
            }
        }
        
        for (int i = 0; i < vec.size(); i++) {
            System.out.println(vec.get(i).data);
        }

    }