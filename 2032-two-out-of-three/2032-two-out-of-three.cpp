class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        vector<int> v;
        unordered_map<int, int> m;
        set<int> s1, s2, s3;
        for (int i : nums1) 
            s1.insert(i);
        for (int i : nums2) 
            s2.insert(i);
        for (int i : nums3) 
            s3.insert(i);
        for (int i : s1) 
            m[i]++;
        for (int i : s2) 
            m[i]++;
        for (int i : s3) 
            m[i]++;
        for (auto it : m)
            if(it.second > 1) 
                v.push_back(it.first);
        return v;
    }
};