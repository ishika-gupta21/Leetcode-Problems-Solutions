class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        set<int> s;
        int n1 = arr1.size(), n2 = arr2.size(), ans = 0;
        for(int i=0; i<n2; i++) 
            s.insert(arr2[i]);
        for(int i=0; i<n1; i++) 
            if(s.lower_bound(arr1[i]-d) == s.upper_bound(arr1[i]+d))
                ans++;
        return ans;
    }
};