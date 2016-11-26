class Solution{
public:
	vector<string> letterCombinations(string digits){
		vector<int> res;
		if(digits.size()==0) return res;
		string charmap[]={"0","1","abc","def","ghi","jkl","mno",\
		"pqrs","tuv","wxyz"};
		res.push_back("");
		for(int i=0;i<digits.size();i++){
			vector<string> temp;
			string str=charmap[digits[i]-'0'];
			for(int c=0;c<str.size();c++)
				for(int j=0;j<res.size();j++)
					temp.push_back(res[j]+str[c]);
			res=temp;
		}
		return res;
	}
}
