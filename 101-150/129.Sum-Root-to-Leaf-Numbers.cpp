class Solution{
public:
	int sumNumbers(TreeNode* root){
		return suma(root,0);
	}
	int suma(TreeNode* root,int val){
		if(!root) return 0;
		val=val*10+root->val;
		if(!root->left&&root->right) return val;
		return suma(root->left,val)+suma(root->right,val);
	}
}
