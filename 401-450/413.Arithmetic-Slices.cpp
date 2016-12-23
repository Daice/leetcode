class Solution{
public:
	int numberOfArithmeticsSlices(vector<int>& A){
		int n=A.size();
		if(n<3) return 0;
		vector<int> dp(n,0);
		if(A[1]-A[0]==A[2]-A[1]) dp[2]=1;
		int res=dp[2];
		for(int i=3;i<n;i++){
			if(A[i]-A[i-1]==A[i-1]-A[i-2]) dp[i]=dp[i-1]+1;
			res+=dp[i];
		}
		return res;
	}
}
