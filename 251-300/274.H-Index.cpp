class Solution{
public:
	int hIndex(vector<int>& citations){
		int l=citations.size();
		if(l<1) return 0;
		vector<int> a(l+1,0);
		for(auto x:citations){
			if(x>l) a[l]++;
			else a[x]++;
		}
		int res=0;
		for(int i=l;i>=0;i--){
			res+=a[i];
			if(res>=i) return i;
		}
		return 0;
	}
}
