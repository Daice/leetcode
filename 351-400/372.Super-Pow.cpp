class Solution{
public:
	const int base=1337;
	int superPow(int a,vector<int>& b){
		if(b.empty()) return 1;
		int last_digit=b.back();
		b.pop_back();
		return f(superPow(a,b),10)*f(a,last_digit)%base;
	}
	int f(int a,int k){
		a%=base;
		int res=1;
		while(k--) res=(a*res)%base;
		return res;
	}
}
