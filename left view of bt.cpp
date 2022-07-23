void helper(Node *root, vector<int> &res, int &ml, int level){
    if(root==NULL)return;
    if(level>ml){
        res.push_back(root->data);
        ml=level;
        
    }
    helper(root->left, res, ml, level+1);
    helper(root->right, res, ml, level+1);
}
vector<int> leftView(Node *root)
{
    
    // int ::ml = 1;
    vector<int> res;
    int ml=0;
    helper(root, res, ml, 1);
    return res;