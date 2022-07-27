class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
    {
        unordered_map <string, int> pos;
        vector<string> ans;
        int min_sum = INT_MAX;
        for(int i=0; i<list1.size(); i++) 
        {
            pos[list1[i]] = i+1;
        }
        for(int i=0; i<list2.size(); i++)
        {
            string st = list2[i];
            if(pos[st]>0) 
            {
                int sum = i + 1 + pos[st];
                if(sum < min_sum)
                {
                    min_sum = sum;
                    ans.clear();
                    ans.push_back(st);
                }
                else if(sum == min_sum)
                    ans.push_back(st);
            }
        }
        return ans;
    }
};