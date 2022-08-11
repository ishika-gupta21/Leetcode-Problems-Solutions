class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n = arr.size()*0.25;
        if(arr.size()<2)    
            return arr[0];
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for(auto it:mp)
            if(it.second>n)
                return it.first;
        return 0;
    }
};