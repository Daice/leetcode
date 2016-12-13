class Solution{
public:
	void connect(TreeLinkNode *root){
		auto pre=root,cur=root;
		while(pre->left){
			cur=pre;
			while(cur){
				cur->left->next=cur->right;
				if(cur->next) cur->right=cur->next->left;
				cur=cur->next;
			}
			pre=pre->left;
		}
	}
}
