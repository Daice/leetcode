class Solution{
public:
	int minDistance(string word1,string word2){
		int l1=word1.size(),l2=word2.size();
		vector<vector<int>> m(l1+1,vector<int>(l2+1,0));
		for(int i=0;i<=l1;i++) m[i][0]=i;
		for(int j=0;j<=l2;j++) m[0][j]=j;
		for(int i=1;i<=l1;i++)
			for(int j=1;j<=l2;j++){
				if(word1[i]==word2[j]) m[i][j]=m[i-1][j-1];
				else m[i][j]=min(m[i-1][j-1]+1,min(m[i-1][j]+1,m[i][j-1]+1));
			}
		return m[l1][l2];
	}
}
