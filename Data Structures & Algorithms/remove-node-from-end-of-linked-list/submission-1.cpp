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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>arr;
        if(head == nullptr )return head;
        ListNode*temp = head;
        while( temp != nullptr ){
            arr.push_back( temp->val );
            temp = temp->next;
        }

        int size = arr.size();
        int index = size - n;
        arr[index] = -1;

        temp = nullptr;
        head = nullptr;
        for( int i = 0; i < arr.size(); ++i ){

            if( arr[i] != -1 ){
                ListNode* t = new ListNode();
                t->val = arr[i];
                if( temp == nullptr ){
                    temp = t;
                    head = t;
                }else{
                    temp->next = t;
                    temp = temp->next;
                }
                
            }
        }

        if( temp != nullptr )temp->next = nullptr;
        return head;
    }
};
