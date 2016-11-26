class Solution{
public:
	int maxArea(vector<int>& h){
		int l=0,r=h.size()-1,res=0;
		while(l<r){
			if(h[l]<h[r]) res=max(res,(r-l)*h[l++]);
			else res=max(res,(r-l)*h[r--]);
		}
		return res;
	}
}
