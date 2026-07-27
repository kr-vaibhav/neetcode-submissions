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
    void solve( TreeNode* root, int & ans, int & k, int & counter ){
        if( ans != INT_MIN )return;
        if( root == nullptr )return;

        solve( root->left, ans, k, counter );
        counter++;
        if( counter == k ){
            ans = root->val;
            return;
        }
        solve( root->right, ans, k, counter );
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = INT_MIN;
        int counter = 0;

        solve( root, ans, k, counter );

        return ans;
    }
};
