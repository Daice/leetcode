class Solution{
public:
	vector<int> postorderTraversal(TreeNode* root){
		vector<int> res;
		help(root,res);
		return res;
	}
	void help(TreeNode* root,vector<int>& res){
		if(!root) return;
		help(root->left,res);
		help(root->righht,res);
		res.push_back(root->val);
	}
}
