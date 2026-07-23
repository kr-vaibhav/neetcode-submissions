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
    int n = 500;
    vector<bool> flag = vector<bool>(n, false);


    void solve( TreeNode*& root, vector<bool>&flag, vector<int>&ans, int  level ){
        
        if( root == nullptr )return;

        if( !flag[level] ){
            ans.push_back( root->val );
            flag[level] = true;
        }

        solve( root->right, flag, ans, level+1 );
        solve( root->left, flag, ans, level+1 );
    }

public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int level = 0;

        solve(root, flag, ans, level);

        return ans;
    }
};
