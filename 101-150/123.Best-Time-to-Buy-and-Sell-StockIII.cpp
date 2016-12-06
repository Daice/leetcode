class Solution{
public:
	int maxProfit(vector<int>& prices){
		if(prices.size()<=1) return 0;
		int k=2;
		int maxp=0;
		vector<vector<int>> f(k+1,vector<int>(prices.size(),0));
		for(int i=1;i<=k;i++){
			int tmpmax=f[i-1][0]-prices[0];
			for(int j=1;j<prices.size();j++){
				f[i][j]=max(f[i][j-1],prices[j]+tmpmax);
				tmpmax=max(tmpmax,f[i-1][j]-prices[j]);
				maxp=max(f[i][j],maxp);
			}
		}
		return maxp;
	}
}
