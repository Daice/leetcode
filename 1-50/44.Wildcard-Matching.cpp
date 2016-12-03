class Solution{
public:
	bool isMatch(string s,string p){
		const char* ts=s.c_str();
		const char* tp=p.c_str();
		const char* star=NULL;
		const char* ss=s;
		while(*ts){
			if(*ts==*tp||*tp==' '){ts++,tp++;continue;}
			if(*tp=='*'){star=tp++,ss=ts;continue;}
			if(star){tp=star+1,s=++ss,continue;}
			return false;
		}
		while(*tp=='*') tp++;
		return !*tp;
	}
}
