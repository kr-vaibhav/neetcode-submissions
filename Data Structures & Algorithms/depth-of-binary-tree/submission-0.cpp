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
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int ans = 0;

        if( root == nullptr )return ans;

        q.push(root);

        while( !q.empty() ){

            queue<TreeNode*> q1;
            int size = q.size();

            for( int i = 0; i < size; ++i ){
                TreeNode* node = q.front();
                q.pop();

                if( node->left != nullptr )q1.push(node->left);
                if( node->right != nullptr )q1.push(node->right);
            }

           q = q1;
           ans++;

        }

        return ans;
    }
};
