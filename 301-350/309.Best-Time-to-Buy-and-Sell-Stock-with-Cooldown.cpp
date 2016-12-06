class Solution{
	/*
	 * buy[i]=max(rest[i-1]-x,buy[i-1]);
	 * sell[i]=max(buy[i-1]+x,sell[i-1]);
	 * rest[i]=max(buy[i-1],sell[i-1],rest[i-1]);
	 * and
	 * rest[i]=sell[i]
	 */
public:
	int maxProfit(vector<int>& prices){
		int buy=INT_MIN,sell=0,prev_sell=0,prev_buy;
		for(auto x:preices){
			prev_buy=buy;
			buy=max(prev_sell-x,buy);
			prev_sell=sell;
			sell=max(prev_buy+x,sell);
		}
		return sell;
	}
}
