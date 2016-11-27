class Solution{
public:
	ListNode* swapPairs(ListNode* head){
		if(!head||!head->next) return head;
		ListNode* pre=new ListNode(0);
		pre->next=head;
		auto res=head->next;
		auto cur=head,next=head;
		while(cur&&cur->next){
			next=cur->next;
			cur->next=next->next;
			next->next=cur;
			pre->next=next;
			pre=cur;
			cur=cur->next;
		}
		return res;
	}
}
