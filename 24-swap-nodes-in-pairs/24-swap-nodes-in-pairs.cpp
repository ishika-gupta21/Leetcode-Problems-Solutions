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
    ListNode* swapPairs(ListNode* head)
    {
        if(!head)
            return head;
        if(head->next==NULL)
            return head;
        ListNode* current,*nextnode;
        current=head;
        nextnode=head;
        while(nextnode->next!=NULL)
        {
            nextnode=nextnode->next;
            swap(current->val,nextnode->val);
            if(nextnode->next!=NULL)
            {
                current=nextnode->next;
                nextnode=nextnode->next;
            }
        }
        return head;
    }
};