class Solution{
	vector<int> inorderTraversal(TreeNode* root){
		vector<int> res;
		in(root,res);
		return res;
	}
	void in(TreeNode* root,vector<int>& res){
		if(!root) return;
		in(root->left,res);
		res.push_back(root->val);
		in(root->right,res);
	}
}
