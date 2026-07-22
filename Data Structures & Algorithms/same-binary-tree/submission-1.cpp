/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {

    void solve( TreeNode*&root, vector<int>&arr ){

        if( root == nullptr ){
            arr.push_back(-101);
            return;
        }

        arr.push_back(root->val);
        solve(root->left, arr);
        
        solve(root->right,arr);
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>arrP, arrQ;

        solve(p, arrP);
        solve(q, arrQ);

        if( arrP == arrQ )return true;
        return false;
    }
};
