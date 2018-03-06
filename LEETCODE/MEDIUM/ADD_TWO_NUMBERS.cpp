/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

static const auto _____ = []() // some hacking around to make runtime faster
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0); // dummy head node.
		ListNode* pre_head = head; // to reference back for x in [0, x, y, z] by pre_head->next.
        int carry = 0;
        int sum = 0;
        int l1_val = 0;
        int l2_val = 0;
        
        while (l1 || l2 || carry) { // edge case: 5 + 5 = 10. carry needs to get detected.
            
            if (l1) { l1_val = l1->val; l1 = l1->next; } else { l1_val = 0; }
            if (l2) { l2_val = l2->val; l2 = l2->next; } else { l2_val = 0; }
            
            sum = l1_val + l2_val + carry; // value of l1 + value of l2 + any 2nd digits of 10, 20, etc.
            
            if (sum >= 10) { // is a carry over
                carry = (sum / 10) % 10; // get the carry over. math edgey? case: 10/10 = 1 % 10 = 1.
                sum = sum % 10; // get the 1st digit of sum >= 10.
            }
            else {
                carry = 0; // reset carry if sum >= 10, since it may be carry >= 1 if it did previous iteration.
            }
            
            cout << sum << ' ' << carry << endl; // debug.
            
            head->next = new ListNode(sum); // next node in linked list has this value.
            head = head->next; // transition to the next value, the node we just set value sum to.
        }
        
        ListNode* temp = pre_head; // point to dummy head.
        pre_head = pre_head->next; // advance dummy head to actual numbers.
        delete temp; // delete dummy head. don't forget memory leak, the user will not use dummy head.
        
        return pre_head;
    }
};