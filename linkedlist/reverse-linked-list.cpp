class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*  curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr){
         ListNode* next_node = curr -> next;

         curr -> next = prev;

         prev = curr;

         curr = next_node;
        }
        return prev;
    }
};