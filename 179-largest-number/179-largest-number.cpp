class Solution {
public:
    static bool cmp(string a,string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums)
    {
        vector<string>v;
        for(auto i:nums)
            v.push_back(to_string(i));
        sort(v.begin(),v.end(),cmp);
        string str="";
        for(int i=0;i<nums.size();i++)
            str+=v[i];
         if(str.length()>nums.size())
             return str;
         return to_string(stoll(str));
        
    }
};