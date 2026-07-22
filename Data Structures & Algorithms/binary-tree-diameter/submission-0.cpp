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

    int solve( TreeNode* & root, int & ans){

        if( root == nullptr )return 0;

        int left,right,mx;

        left = solve(root->left, ans);
        right = solve(root->right, ans);

        mx = max(left,right);
        ans = max(left+right, ans);

        return 1 + mx;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans = 0;
        solve(root, ans);
        return ans;
        
    }
};
