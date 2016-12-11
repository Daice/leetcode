class Solution{
public:
	int findNthDigit(int n){
		long base=9;
		int len=1,i=1;
		while(n>len*base){
			n-=len*base;
			len++;
			base*=10;
			i*=10;
		}
		return to_string(i+(n-1)/len)[(n-1)%len];
	}
}
