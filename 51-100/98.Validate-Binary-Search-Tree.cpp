class Solution{
public:
	bool isValidBST(TreeNode* root){
		return ValidBST(root,NULL,NULL);
	}
	bool ValidBST(TreeNode* root,TreeNode* minNode,TreeNode* maxNode){
		if(!root) return true;
		if(minNode&&root->val<=minNode->val||maxNode&&root->val>=maxNode->val)
			return false;
		return ValidBST(root->left,minNode,root)&&ValidBST(root->right,root,maxNode);
	}
private:
	isValidBST(TreeNode* root){
		if(!root) return true;
		stack<TreeNode*> s;
		long min=LONG_MIN;
		while(!s.empty()||root){
			if(root){
				s.push(root);
				root=root->left;
			}else{
				root=s.top();
				s.pop();
				if(min<root->val) min=root->val;
				else return false;
				root=root->right;
			}
		}
		return true;
	}
}
