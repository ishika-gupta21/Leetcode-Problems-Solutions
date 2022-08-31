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
    void reorderList(ListNode* head)
    {
        ListNode *q1=head,*q2=head;
        while(q2!=NULL && q2->next!=NULL)
        {
            q1=q1->next;
            q2=q2->next->next;
        }
        q2=q1->next;
        q1->next=NULL;
        stack<int>n;
        while(q2!=NULL)
        {
            n.push(q2->val);
            q2=q2->next;
        }
        q1=head;
        while(q1!=NULL)
        {
            ListNode *temp=new ListNode;
            if(n.empty()) 
                break;
            temp->val=n.top();
            n.pop();
            temp->next=q1->next;
            q1->next=temp;
            q1=q1->next->next;
        }
    }
};