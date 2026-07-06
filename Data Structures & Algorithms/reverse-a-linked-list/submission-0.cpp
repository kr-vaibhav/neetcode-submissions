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

            if(head==nullptr)return nullptr;

            stack<ListNode*>st;
            while( head != nullptr ){
                st.push(head);
                head = head->next;
            }

            ListNode* ans = st.top();
            ListNode* temp = st.top();
            st.pop();
            while(!st.empty()){
                temp->next = st.top();
                temp = temp->next;
                st.pop();
            }

            temp->next = nullptr;

            return ans;
        }
    };
