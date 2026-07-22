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

    int solve( TreeNode* & root, bool & flag){

        if( root == nullptr )return 0;
        else if( flag == false )return 0;

        int left,right,mx;

        left = solve(root->left, flag);
        right = solve(root->right, flag);

        mx = max(left,right);

        if( abs(left-right) > 1 ){
            flag = false;
            return 0;
        }

        return 1 + mx;
    }
public:
    bool isBalanced(TreeNode* root) {
        bool flag = true;

        solve( root, flag );

        return flag;
    }
};
