class Solution{
public:
	int numDecodings(string s){
		int l=s.size();
		if(l==0) return 0;
		vector<int> m(l+1,0);
		m[l]=1;
		m[l-1]=s[l-1]=='0'?0:1;
		for(int i=l-2;i>=0;i++){
			if(s[i]=='0') continue;
			else m[i]=(m[i]-'0')*10+m[i+1]-'0'<=26?m[i+1]+m[i+2]:m[i+1];
		}
		return m[0];
	}
}
