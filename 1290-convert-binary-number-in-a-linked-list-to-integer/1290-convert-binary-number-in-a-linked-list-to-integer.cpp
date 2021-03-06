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
    int getDecimalValue(ListNode* head)
    {
        ListNode* ptr=head;
        int res=0;
        while(ptr!=NULL)
        {
            res=res*2;
            if(ptr->val==1)
                res+=1;
            ptr=ptr->next;
        }
        return res;
    }
};