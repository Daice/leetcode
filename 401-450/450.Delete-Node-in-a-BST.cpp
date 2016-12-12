class Solution{
public:
	TreeNode* deleteNode(TreeNode* root,int key){
		if(!root) return NULL;
		if(root->val>key) root->left=deleteNode(root->left,key);
		else if(root->val<key) root->right=deleteNode(root->right,key);
		else{
			if(!root->left) return root->right;
			if(!root->right) return root->left;
			auto temp=root->right;
			while(temp->left) temp=temp->left;
			temp->left=root->left;
			return root->right;
		}
		return root;
	}
}
