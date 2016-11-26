class Solution{
public:
	int threeSumClosest(vector<int>& nums,int target){
		if(nums.size()<3) return 0;
		int sum=nums[0]+nums[1]+nums[2];
		sort(nums.begin(),nums.end());
		int l=nums.size();
		for(int i=0;i<l-2;i++){
			int lo=i+1,hi=l-1;
			while(lo<hi){
				int tsum=nums[i]+nums[lo]+nums[hi];
				if(tsum==target) return tsum;
				if(abs(target-tsum)<abs(target-sum)) sum=tsum;
				if(tsum>target) hi--;
				else if(tsum<target) lo++;
			}
			while(i<l-1&&nums[i]==nums[i+1]) i++;
		}
		return sum;
	}
}
