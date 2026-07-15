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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        int n = lists.size();
        for( ListNode* node : lists ){
            while( node != nullptr ){
                arr.push_back(node->val);
                node = node->next;
            }
        }

        if( arr.size() == 0 )return nullptr;
        sort(arr.begin(),arr.end());
        ListNode* ans = new ListNode();
        ans->val = arr[0];
        ListNode* temp = ans;

        for( int i = 1; i < arr.size(); ++i ){
            ListNode* t = new ListNode();
            t->val = arr[i];
            temp->next = t;
            temp = temp->next;
        }

        temp->next = nullptr;

        return ans;
    }
};
