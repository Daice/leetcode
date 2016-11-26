class Solution{
public:
	vector<vector<int>> threeSum(vector<int>& nums){
		vector<vector<int>> res;
		sort(nums.begin(),nums.end());
		int l=nums.size();
		for(int i=0;i<l-2;i++){
			int lo=i+1,hi=l-1;
			while(lo<hi){
				if(nums[lo]+nums[hi]+nums[i]>0) hi--;
				else if(nums[lo]+nums[hi]+nums[i]<0) lo--;
				else{
					vector<int> temp{nums[i],nums[lo],nums[hi]};
					res.push_back(temp);
					while(lo<hi&&nums[lo]==temp[1]) lo++;
					while(lo<hi&&nums[hi]==temp[2]) hi--;
				}
			}
			while(i<l-1&&nums[i]==nums[i+1]) i++;
		}
		return res;
	}
}
