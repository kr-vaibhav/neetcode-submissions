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
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>oldToNew;

        Node*curr = head;
        oldToNew[NULL] = NULL;

        while( curr != NULL ){
            Node* temp = new Node(curr->val);
            oldToNew[curr] = temp;
            curr = curr->next;
        }

        curr = head;

        while( curr != NULL ){
            
            Node* copy = oldToNew[curr];
            copy->next = oldToNew[curr->next];
            copy->random = oldToNew[curr->random];
            curr = curr->next;
        }
        return oldToNew[head];
    }
};
