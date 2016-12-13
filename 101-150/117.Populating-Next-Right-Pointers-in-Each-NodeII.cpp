class Solution{
public:
	void connect(TreeLinkNode* root){
		auto head=root;
		TreeLinkNode* tmp=new TreeLinkNode(0);
		while(head){
			auto node=head,temp=tmp;
			while(node){
				if(node->left){
					temp->next=node->left;
					temp=node->left
				}
				if(node->right){
					temp->next=node->right;
					temp=node->right;
				}
				node=node->next;
			}
			head=tmp->next;
			temp->next=NULL;
		}
	}
}
