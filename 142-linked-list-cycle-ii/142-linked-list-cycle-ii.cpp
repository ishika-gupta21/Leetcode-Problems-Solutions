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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow)
            {
                fast = head;
                if(slow == fast)
                {
                    return slow;
                }
                while(fast->next != slow->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow->next;
            }
        }
        return NULL;
    }
};