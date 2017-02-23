/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* B = A;
    
    if (A == NULL || A -> next == NULL) {
        return B;
    }
    
    while (A != NULL && A -> next != NULL) {
        if (A -> next -> val == A -> val) { // 1 1 2 3 3
            A -> next = A -> next -> next; // 1 (1 -> 2) 3 3
        }
        else {
            A = A -> next;
        }
    }
    
    return B;

}