class Solution{
public:
	int maxRotateFunction(vector<int>& A){
		int l=A.size();
		int f=0,sum=0;
		for(int i=0;i<l;i++){
			f+=i*A[i];
			sum+=A[i];
		}
		int res=f;
		for(int i=l-1;i>=0;i++){
			f=f+sum-l*A[i];
			res=max(f,res);
		}
		return res;
	}
}
