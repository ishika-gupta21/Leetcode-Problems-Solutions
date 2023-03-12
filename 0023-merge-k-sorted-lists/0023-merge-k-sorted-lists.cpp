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
     ListNode* merge(ListNode* root1, ListNode* root2){
        if(root2==NULL&&root1==NULL)
            return NULL;
        if(root2==NULL)
            return root1;
        if(root1==NULL)
            return root2;
        if(root1->val<root2->val)
        {
            ListNode* root=new ListNode(root1->val);
            root->next=merge(root1->next,root2);
            return root;
        }
        ListNode* root=new ListNode(root2->val);
        root->next=merge(root1,root2->next);
        return root;
    }
    ListNode* dvc(vector<ListNode*>& lists, int s, int e)
    {
        if(s>e)
            return NULL;
        if(s==e)
            return lists[s];
        int m=s+((e-s)/2);
        ListNode* root_left=dvc(lists,s,m);
        ListNode* root_right=dvc(lists,m+1,e);
        ListNode* root=merge(root_left,root_right);
        return root;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int n=lists.size()-1;
        return dvc(lists,0,n);
    }
};