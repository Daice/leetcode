class Solution{
public:
	string longestCommonPrefix(vector<string>& strs){
		string s;
		if(strs.size()==0) return s;
		for(int i=0;i<strs[0].size();i++){
			for(int j=1;j<strs.size();j++)
				if(strs[0][i]!=strs[j][i]) return s;
			s+=strs[0][i];
		}
		return s;
	}
}