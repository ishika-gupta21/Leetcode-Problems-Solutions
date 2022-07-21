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
    ListNode* swapNodes(ListNode* head, int k)
    {
        ListNode*b=head,*e=head,*n;
        while(--k)
            b=b->next;
        n=b;
        while(n->next)
        {
            e=e->next;
            n=n->next;
        }
        swap(b->val,e->val);
        return head;
    }
};