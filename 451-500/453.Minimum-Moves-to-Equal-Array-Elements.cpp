class Solution{
public:
	int minMoves(vector<int>& nums){
		//return accumulate(begin(nums),end(nums),0)-nums.size()* *min_element(begin(nums),end(nums));
		int sum=0,minX=INT_MAX;
		for(auto x:nums){
			sum+=x;
			minX=min(minX,x);
		}
		return sum-nums.size()*minX;
	}
}
