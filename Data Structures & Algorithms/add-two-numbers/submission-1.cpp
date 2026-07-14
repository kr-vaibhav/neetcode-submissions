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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num = l1->val + l2->val;
        int zeroPlace = num % 10;
        int carry = num / 10;
        ListNode* temp = new ListNode();
        ListNode* ans = temp;
        temp->val = zeroPlace;
        l1 = l1->next;
        l2 = l2->next;

        while( l1 != nullptr && l2 != nullptr ){
            num = l1->val + l2->val + carry;
            zeroPlace  = num % 10;
            carry = num / 10;
            num = num / 10;
            ListNode* t = new ListNode();
            t->val = zeroPlace;
            temp->next = t;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while( l1 != nullptr){
            num = l1->val + carry;
            zeroPlace = num % 10;
            carry = num / 10;
            num = num / 10;
            ListNode* t = new ListNode();
            t->val = zeroPlace;
            temp->next = t;
            temp = temp->next;
            l1 = l1->next;
        }

        while( l2 != nullptr ){
            num = l2->val + carry;
            zeroPlace = num % 10;
            carry = num / 10;
            num = num / 10;
            ListNode *t = new ListNode();
            t->val = zeroPlace;
            temp->next = t;
            temp = temp->next;
            l2 = l2->next;
        }

        while(carry!=0){
            ListNode *t = new ListNode();
            t->val = carry;
            temp->next = t;
            temp = temp->next;
            carry = 0;
        }

        temp->next = nullptr;

        return ans;
    }
};
