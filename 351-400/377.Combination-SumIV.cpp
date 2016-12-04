class Solution{
public:
	int cominationSum4(vector<int>& nums,int target){
		vector<int> dp(target+1);
		dp[0]=1;
		for(int i=1;i<=target;i++)
			for(auto x:nums)
				if(i>=x)
					dp[i]+=dp[i-x];
		return dp[target];
	}
}
