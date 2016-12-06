class Solution{
public:
	int maxProfit(int k,vector<int>& prices){
		int maxp=0;
		if(k>=prices.size()/2){
			for(int i=1;i<prices.size();i++)
				if(prices[i]>prices[i-1])
					maxp+=prices[i]-prices[i-1];
			return maxp;
		}
		vector<vector<int>> dp(k+1,vector<int>(prices.size(),0));
		for(int i=1;i<=k;i++){
			int buy=-prices[0];
			for(int j=1;j<prices.size();j++){
				dp[i][j]=max(dp[i][j-1],prices[j]+buy);
				buy=max(buy,dp[i-1][j]-prices[j]);
				maxp=max(maxp,dp[i][j]);
			}
		}
		return maxp;
	}
}
