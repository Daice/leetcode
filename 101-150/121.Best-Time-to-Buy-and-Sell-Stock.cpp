class Solution{
public:
	int maxProfit(vector<int>& preices){
		int l=prices.size();
		if(l==0) return 0;
		vector<int> dp(l,0);
		int minp=preices[0],maxp=0;
		for(int i=1;i<l;i++){
			dp[i]=max(0,prices[i]-minp);
			minp=min(minp,prices[i]);
			maxp=max(maxp,dp[i]);
		}
		return maxp;
	}
}
