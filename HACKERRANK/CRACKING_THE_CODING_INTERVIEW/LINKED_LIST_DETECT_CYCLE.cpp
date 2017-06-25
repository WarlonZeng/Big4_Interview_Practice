/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

using namespace std;

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
   
    if (head == NULL)
        return false;
    
    Node* head_1 = head;
    Node* head_2 = head;
    
    while (true) {
        
        head_1 = head_1 -> next;
        if (head_1 == NULL) 
            return false;
        
        
        head_2 = head_2 -> next -> next;
        if (head_2 == NULL)
            return false;
        
        if (head_1 -> next == NULL)
            return false;
        if (head_2 -> next == NULL)
            return false;

        if (head_1 == head_2)
            return true;
         
        
    }
    return false;
}
