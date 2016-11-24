class Solution{
public:
	string longestPalindrome(string s){
		if(s.size()<=1) return s;
		int lo=0,hi=0,l=s.size();
		int maxlen=1,start=0;
		for(int i=0;i<l;){
			if(l-i<maxlen/2) break;
			lo=hi=i;
			while(hi<l-1&&s[hi]==s[hi+1]) hi++;
			i=hi+1;
			while(lo>0&&hi<l-1&&s[lo-1]==s[hi+1]) lo--,hi++;
			if(hi-lo+1>maxlen) maxlen=hi-lo+1,start=lo;
		}
		return s.substr(start,maxlen);
	}
}
