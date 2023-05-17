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
    int pairSum(ListNode* head) {
        ListNode *h1 = head;
        int size = 0, i = 0, ret = 0;
        while (h1) {
            h1 = h1->next;
            ++size;
        }
        int temp[size];

        while (head) {
            temp[i] = head->val;
            head = head->next;
            ++i;
        }

        for (int j = 0, k = size - 1; j < size/2 && k >= size/2; j++, k--) {
            if (ret < temp[j] + temp[k]) {ret = temp[j] + temp[k];}
        }
        return ret;
    }
};