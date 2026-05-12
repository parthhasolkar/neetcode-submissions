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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==nullptr) return {};
        vector<vector<int>>res;
        q.push(root);
        while(!q.empty()){
            int lvl=q.size();
            vector<int>vt;
            while(lvl--){
                TreeNode*p=q.front();
                q.pop();
              vt.push_back(p->val);
              if(p->left!=nullptr) {
                q.push(p->left);
              }
              if(p->right!=nullptr) {
                q.push(p->right);
              }
            }
            res.push_back(vt);
        }
        return res;
    }
};
