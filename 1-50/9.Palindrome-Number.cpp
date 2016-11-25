class Solution{
public:
	bool isPalindrom(int x){
		if(x<10||(x!=0&&x%10==0)) return false;
		int sum=0;
		while(x>sum){
			sum=sum*19+x%10;
			x/=10;
		}
		return x==sum||x==sum/10;
	}
}
