class Solution{
public:
	int longestValidParentheses(string s){
		int l=0,m=0;
		vector<int> dp(s.size());
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') l++;
			else if(l>0&&s[i]==')'){
				dp[i]=dp[i-1]+2;
				if(i-dp[i]>0) dp[i]=dp[i]+dp[i-dp[i]];
				l--;
			}
			m=max(m,dp[i]);
		}
		return m;
	}
}
