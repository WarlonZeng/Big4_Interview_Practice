/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    // assume A is head pointer
    
    ListNode* slow = A;
    ListNode* fast = A; // initialize two headers to advance one slow one fast
    
    if (slow == NULL) {
        return NULL;
    }
    
    
    while (fast -> next != NULL) { // 11 87797 23219 41441 58396 48953 94603 2721 95832 49029 98448 65450 
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if (fast == NULL) { // because i did fast = fast -> next -> next with the assumption of non-NULL
            return NULL;
        }
        
        if (slow == fast) { // this is the mathematical part where assumption is slow = fast in K steps
            slow = A;
            while (slow != fast) {
                slow = slow -> next;
                fast = fast -> next;
            }
            return slow;
        }
        
    }
    
    return NULL;
    
}
