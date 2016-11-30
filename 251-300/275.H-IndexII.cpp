class Solution{
public:
	int hIndex(vector<int> &citations){
		int lo=0,hi=citations.size()-1,l=citations.size();
		while(lo<=hi){
			int mid=lo+(hi-lo)>>1;
			if(citations[mid]==(l-mid)) return citations[mid];
			else if(citations[mid]>(l-mid)) hi=mid-1;
			else lo=mid+1;
		}
		return l-hi-1;
	}
}
