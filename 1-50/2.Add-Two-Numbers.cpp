class Solution{
public:
	ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
		ListNode pre(0),*p=&pre;
		int c=0;
		while(l1||l2||c){
			if(l1) c+=l1->val,l1=l1->next;
			if(l2) c+=l2->val,l2=l2->next;
			p->next=new ListNode(c%10);
			p=p->next;
			c/=10;
		}
		return pre->next;
	}
}
