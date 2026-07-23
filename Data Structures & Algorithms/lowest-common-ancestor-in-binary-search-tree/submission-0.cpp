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
    void solve(TreeNode*&root, TreeNode*&target, vector<TreeNode*>&arr, bool &flag ){

        if(flag == true)return;
        if( root == nullptr )return;

        if( root == target ){
            arr.push_back(root);
            flag = true;
            return;
        }else if( root->val > target->val ){
            solve( root->left, target, arr, flag);
            arr.push_back(root);
        }else{
            solve( root->right, target, arr, flag);
            arr.push_back(root);
        }
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>arr1, arr2;
        bool flag = false;

        solve(root,p,arr1,flag);
        flag = false;
        solve(root, q, arr2, flag);

        for( int i = 0; i < arr1.size(); ++i ){

            for( int j = 0; j < arr2.size(); ++j ){

                if( arr1[i] == arr2[j] )return arr1[i];
            }
        }

        return nullptr;
    }
};
