class Solution {
public:
   
        
    void inord(TreeNode* root, vector<int> &v){
        if(root==NULL)
            return;
        inord(root->left, v);
        v.push_back(root->val);
        inord(root->right, v);
            
    }
     vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inord(root, v);
        return v;
        
    }
};