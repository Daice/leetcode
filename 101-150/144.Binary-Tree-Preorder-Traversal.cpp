class Solution{
public:
	vector<int> preorderTraversal(TreeNode* root){
		vector<int> res;
		help(root,res);
		return res;
	}
	void help(TreeNode* root,vector<int>& res){
		if(!root) return;
		res.push_back(root->val);
		help(root->left,res);
		help(root->right,res);
	}
}
