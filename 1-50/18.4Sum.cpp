class Solution{
public:
	vector<vector<int>> fourSum(vector<int>& nums,int target){
		vector<vector<int>> ret;
		sort(nums.begin(),nums.end());
		for(int i=0;i<nums.size();i++){
			threeSum(nums,i,target-nums[i],ret);
			while(i+1<nums.size()&&nums[i]==nums[i+1]) i++;
		}
		return ret;
	}
	void threeSum(vector<int> &nums,int start,int target,vector<vector<int>> &ret){
		int l=nums.size();
		for(int i=start;i<l;i++){
			int lo=i+1,hi=l-1;
			while(lo<hi){
				if(nums[i]+nums[lo]+nums[hi]<target) lo++;
				else if(nums[i]+nums[lo]+nums[hi]>target) hi--;
				else{
					vector<int> temp{nums[i],nums[lo],nums[hi]};
					ret.push_back(temp);
					while(lo<hi&&nums[lo]==temp[1]) lo++;
					while(lo<hi&&nums[lo]==temp[2]) hi--;
				}
			}
			while(i+1<l&&nums[i]==nums[i+1]) i++;
		}
	}
}
