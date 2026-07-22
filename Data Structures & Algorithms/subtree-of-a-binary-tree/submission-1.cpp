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
            return;
        }

        solve(root->left, arr);
        solve(root->right,arr);
        arr.push_back(root->val);
    }

    void solve1( TreeNode*&root, vector<int>&arr, vector<int>&ans, bool& flag){

        if( root == nullptr ){
            return;
        }
        if( flag == true )return;

        solve1(root->left, arr, ans, flag);
        solve1(root->right, arr, ans, flag);
        arr.push_back(root->val);

        if( arr == ans ){
            flag = true;
            return;
        }
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<int>rt, subrt;
        bool flag = false;

        solve(subRoot, subrt);
        solve1(root, rt, subrt, flag);

        return flag;
    }
};
