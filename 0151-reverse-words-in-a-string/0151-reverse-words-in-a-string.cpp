class Solution {
public:
    string reverseWords(string s) 
    {
        string ans;
		s.push_back(' ');
		vector<string> arr;
		string temp="";
		for (int i=0;i<s.length();i++)
		{
			if (s[i]!=' ')
				temp+=s[i];
			else
			{
				if(temp!="")
					arr.push_back(temp);
				temp="";
				while(i+1!=s.length() && s[i + 1]==' ')
					i++;
			}
		}
		for (int i=arr.size()-1;i>=0;i--)
		{
			ans+=arr[i];
			if (i==0)
				break;
			ans+=' ';
		}
		return ans;
    }
};