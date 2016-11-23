class Solution{
public:
	vector<int> twoSum(vector<int>& nums,int target){
		unordered_map<int,int> map;
		vector<int> res;
		for(int i=0;i<nums.size();i++){
			int next=target-nums[i];
			if(map.find[next]!=map.end()){
				res.push_back(map[next]);
				res.push_back(i);
				return res;
			}
			map[nums[i]]=i;
		}
		return res;
	}

	vector<int> twoSum(vector<int>& nums,int target){
		int lo=0,hi=nums.size()-1;
		vector<pair<int,int>> m;
		for(int i=0;i<=hi;i++)
			m.push_back(make_pair(nums[i],i));
		sort(m.begin(),m.end());
		while(m[lo].first+m[hi].first!=target){
			if(m[lo].first+m[hi].first>target) hi--;
			else lo++;
		}
		return vector<int>{m[lo].second,m[hi].second};
	}
}
