/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL)
            return nullptr;
        if (head->next == NULL)
            return nullptr;
        if (head->next->next == NULL)
            return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* slow2 = head;

        while (fast != NULL && fast->next != NULL) {

            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                while (slow != slow2) {
                    slow = slow->next;
                    slow2 = slow2->next;
                }

                return slow2;
            }
        }
        return nullptr;
    }
};
