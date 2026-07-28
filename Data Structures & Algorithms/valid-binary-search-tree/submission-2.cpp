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

    void solve( TreeNode* &root, int mini, int maxi, bool & flag ){
        
        if( flag == false )return;
        if( root == nullptr )return;

        if( ( root->val > mini ) && ( root->val < maxi ) ){
            solve( root->left, mini, min( maxi, root->val ), flag );
            solve( root->right, max( mini, root->val ), maxi, flag );
        }else{
            flag = false;
            return;
        }
    }

public:
    bool isValidBST(TreeNode* root) {
        bool flag = true;
        
        solve( root, INT_MIN, INT_MAX , flag );

        return flag;
    }
};
