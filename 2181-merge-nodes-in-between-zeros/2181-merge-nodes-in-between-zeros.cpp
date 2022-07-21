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
    ListNode* mergeNodes(ListNode* head) 
    {
        if(head==NULL)
            return head;
        ListNode *sol=NULL,*s=NULL;
        while(head!=NULL)
        {
            if(head->val==0)
            {
                head=head->next;
                if(sol==NULL)
                {
                    sol=head;
                    s=sol;
                }
                else
                {
                    sol->next=head;
                    sol=sol->next;
                }
            }
            else
            {
                head=head->next;
                sol->val+=head->val;
            }
        }
        return s;
    }
};