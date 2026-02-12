class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while(prev->next != NULL)
        {
            if(prev->next->val == val)
            {
                ListNode* curr = prev->next;
                prev->next = curr->next;
                delete curr;
            }
            else
            {
                prev = prev->next;
            }
        }

        return dummy->next;
    }
};
