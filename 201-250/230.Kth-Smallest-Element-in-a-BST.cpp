class Solution{
public:
	int kthSmallest(TreeNode* root,int k){
		stack<TreeNode*> s;
		while(!s.empty()||root){
			if(root) s.push(root),root=root->left;
			else{
				root=s.top,s.pop();
				if(!--k) return root->val;
				root=root->right;
			}
		}
		return 0;
	}
}
