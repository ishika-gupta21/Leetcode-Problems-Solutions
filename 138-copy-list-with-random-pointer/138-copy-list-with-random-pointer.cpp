/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mpp;
    Node* copyRandomList(Node* head)
    {
        if(!head)
            return head;
        if(mpp.count(head))   
            return mpp[head];
        Node* newNode = new Node(head->val);
        mpp[head] = newNode;
        newNode->next = copyRandomList(head->next);
        newNode->random = copyRandomList(head->random);
               
        return newNode;
    }
};