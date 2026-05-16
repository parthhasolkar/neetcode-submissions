class Solution {
public:

int maxi = 0;

int fun(TreeNode* root){

    if(root == nullptr) return 0;

    int l = fun(root->left);

    int r = fun(root->right);

    maxi = max(maxi, l + r);

    return 1 + max(l, r);
}

int diameterOfBinaryTree(TreeNode* root) {
    fun(root);
    return maxi;
}
};