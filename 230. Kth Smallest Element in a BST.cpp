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
    void inorder(TreeNode* root , int& count , int&  k , int& ksmallest){
         if (!root || count >= k) return;
         inorder(root->left, count, k , ksmallest);
         count++;
         if(count == k){
            ksmallest = root->val;
            return;
         }
         inorder(root->right , count , k , ksmallest);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ksmallest = INT_MIN;
        int count = 0;
        inorder(root, count , k , ksmallest);
        return ksmallest;
    }
};
