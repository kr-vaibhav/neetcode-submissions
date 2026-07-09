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
    void reorderList(ListNode* head) {
        if(head== nullptr || head->next == nullptr)return;

        vector<ListNode*>arr;
        ListNode*temp = head;
        while( temp != nullptr ){
            arr.push_back(temp);
            temp = temp->next;
        }
        temp = head;
        int count = 1;
        for( int i = 0; i < arr.size(); ++i ){
            if( i % 2 == 0 ){
                temp->next = arr[i/2];
                temp = temp->next;
            }else{
                temp->next = arr[arr.size()-count++];
                temp =temp->next;
            }
        }

        temp->next = nullptr;
    }
};
