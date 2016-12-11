class Solution{
public:
	TreeNode* first=NULL;
	TreeNode* second=NULL;
	TreeNode* pre=new TreeNode(INT_MIN);
	void recoverTree(TreeNode* root){
		traverse(root);
		swap(first->val,second->val);
	}
	void traverse(TreeNode* root){
		if(!root) return;
		traverse(root->left);
		if(first==NULL&&pre->val>=root->val) first=pre;
		if(first!=NULL&&pre->val>=root->val) second=root;
		pre=root;
		traverse(root->right);
	}
}
