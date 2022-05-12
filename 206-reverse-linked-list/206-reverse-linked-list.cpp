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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*current,*nextnode;
        prev=0;
        current=nextnode=head;
        while(nextnode!=NULL){
            nextnode=nextnode->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        head=prev;
        return head;
    }
};