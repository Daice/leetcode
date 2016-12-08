class Solution{
public:
	int minMoves2(vector<int>& nums){
		int mid=getMid(nums.size()/2+1,nums,0,nums.size()-1);
		int res=0;
		for(auto x:nums) res+=abs(x-mid);
		return res;
	}
	int getMid(int k,vector<int>& nums,int s,int e){
		int pivot=nums[s];
		int l=s,r=e;
		while(true){
			while(l<r&&nums[r]>pivot) r--;
			while(l<r&&nums[l]<=pivot) l++;
			if(l==r) break;
			swap(nums[l],nums[r]);
		}
		swap(nums[s],nums[l]);
		if(k==l+1) return p;
		else if(k<l+1) return getMid(k,nums,s,l-1);
		else return getMid(k,nums,l+1,e);
	}
}
