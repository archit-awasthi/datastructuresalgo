/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(!head || head->next == NULL) return true;

        while(fast!= NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondhalf = reverse(slow);
        ListNode* firsthalf = head;

        while(secondhalf)
        {
            if(secondhalf->val == firsthalf->val)
            {
                secondhalf = secondhalf->next;
                firsthalf = firsthalf->next;
            }
            else
            {
                return false;
            }
        }
        return true;


    }
};
