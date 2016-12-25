class Solution{
public:
	int minPathSum(vector<vector<int>>& grid){
		int row=grid.size(),col=grid[0].size();
		if(!row) return 0;
		vector<vector<int>> dp(row,vector<int>(col,0));
		dp[0][0]=grid[0][0];
		for(int i=1;i<row;i++) m[i][0]=grid[i][0]+dp[i-1][0];
		for(int j=1;j<col;j++) m[0][j]=grid[0][j]+dp[0][j-1];
		for(int i=1;i<row;i++)
			for(int j=1;j<col;j++)
				dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
		return dp[i-1][j-1];
	}
}
