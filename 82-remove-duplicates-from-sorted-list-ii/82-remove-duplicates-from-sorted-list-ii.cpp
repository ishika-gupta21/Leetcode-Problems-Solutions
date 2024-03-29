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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        while(head and head->next and head -> val == head -> next -> val) 
        {
            head = head -> next;
            if(head -> next == NULL or head -> val != head -> next -> val)
                head = head -> next;
        }
        ListNode *curr = head, *prev = NULL;
        while(curr != NULL and curr -> next != NULL) 
        {
            if(curr -> val == curr -> next -> val) 
            {
                curr -> next = curr -> next -> next;
                if(curr -> next == NULL or curr -> val != curr -> next -> val) 
                {
                    prev -> next = curr -> next;
                    curr = prev -> next;
                }
            }
            else {
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};