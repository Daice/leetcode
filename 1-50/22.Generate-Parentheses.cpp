class Solution{
public:
	vector<string> generateParenthesis(int n){
		vector<string> res;
		ge(res,"",n,0);
		return res;
	}
	void ge(vector<string> &res,string str,int l,int r){
		if(l==0&&r==0){
			res.push_back(str);
			return;
		}
		if(l>0) ge(res,str+'(',l-1,r+1);
		if(r>0) ge(res,str+')',l,r-1);
	}
}
