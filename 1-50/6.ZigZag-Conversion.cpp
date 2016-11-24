class Solution{
public:
	string convert(string s,int numRows){
		int l=s.size();
		vector<string> m;
		for(int i=0;i<nRows;i++) m.push_back("");
		int i=0;
		while(i<l){
			for(int idx=0;idx<nRows&&i<l;idx++) m[i]+=s[i++];
			for(int idx=nRows-2;idx>0&&i<l;idx--) m[i]+=s[i++];
		}
		for(int i=1;i<nRows;i++) m[0]+=m[i];
		return m[0];
	}
}
