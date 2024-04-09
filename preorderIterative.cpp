#include <bits/stdc++.h>
#include <vector>
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> preorder;
        if(root == NULL) return preorder;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root= st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right != NULL) st.push_back(root->right);
            if(root-> left != NULL) st.push_back(root->left);


        }
        return preorder;

    }
};


// here we first push root node to the stack then remove the first inserted node and check for right node 
// if right child is present the push to stack and then check for left node and push to stack .
// again remove the top of stack and check for same and keep repeating untill the stack is empty.