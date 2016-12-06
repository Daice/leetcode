class Solution{
public:
	vector<int> singleNumber(vector<int>& nums){
		int dif=0;
		for(auto x:nums) dif^=x;
		dif&=-dif;
		vector<int> res(2,0);
		for(auto x:nums){
			if(dif&x) res[0]^=x;
			else res[1]^x;
		}
		return res;
	}
}
