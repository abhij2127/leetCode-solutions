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
    void insertNode(TreeNode *&root,int d){
        if(root==NULL){
		root = new TreeNode(d);
		return;
	    }
	    if(root->val>d){
            if(root->left==NULL){
            root->left = new TreeNode(d);
            return;
        }
        else return insertNode(root->left,d);
        }   
        if(root->val<d){
            if(root->right==NULL){
                root->right = new TreeNode(d);
                return;
            }
            else return insertNode(root->right,d);
        }
    }
    TreeNode* bstFromPreorder(vector<int>& nums) {
        
	    TreeNode *root = NULL;
	    for(auto n : nums){
		    insertNode(root,n);
	    }
        return root;
    }
};