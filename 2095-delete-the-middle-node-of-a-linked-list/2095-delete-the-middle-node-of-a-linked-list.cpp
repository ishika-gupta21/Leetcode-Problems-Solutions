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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* fast=head, *slow=head, *bef=NULL;
        while(fast!=NULL and fast->next!=NULL)
        {
            bef=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        bef->next=slow->next;
        return head;
    }
};