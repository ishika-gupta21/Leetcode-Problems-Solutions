class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
    {
        unordered_map<string, int> m2;
        int n1 = list1.size(), n2 = list2.size();
        for(int i=0;i<n2;i++)
            m2[list2[i]] = i;
        int cost = INT_MAX, i=0;
        vector<string> ans;
        while(i<n1)
        {
            if(m2.find(list1[i])!=m2.end())
            {
                int sum = i+m2[list1[i]];
                if(sum<cost)
                {
                    ans.clear();
                    ans.push_back(list1[i]);
                    cost = sum;
                }
                else if(cost==sum)
                    ans.push_back(list1[i]);
            }
            i++;
        }
        return ans;
    }
};