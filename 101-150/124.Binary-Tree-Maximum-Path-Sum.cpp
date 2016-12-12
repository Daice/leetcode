class Solution{
public:
	int maxPathSum(TreeNode* root){
		int m=INT_MIN;
		help(root,m);
		return m;
	}
	int help(TreeNode* root,int &m){
		if(!root) return 0;
		int l=max(m,help(root->left,m));
		int r=max(m,help(root->right,m));
		m=max(m,l+r+root->val);
		return root->val+max(l,r);
	}
}
