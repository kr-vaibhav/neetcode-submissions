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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* left = list1;
        ListNode* right = list2;

        vector<ListNode*> arr;
        
        while( left!= nullptr && right!= nullptr ){
            if( left->val <= right->val ){
                arr.push_back(left);
                left = left->next;
            }else{
                arr.push_back(right);
                right = right->next;
            }
        }

        while(left != nullptr ){
            arr.push_back(left);
            left = left->next;
        }
        while(right != nullptr ){
            arr.push_back(right);
            right = right->next;
        }
        if(arr.size()==0)return nullptr;
        
        ListNode* temp = arr[0];
        ListNode* head = arr[0];
        for( int i = 0; i < arr.size() - 1; ++i ){
            temp->next = arr[i+1];
            temp = temp->next;
        }
        temp->next = nullptr;
        return head;
    }
};
