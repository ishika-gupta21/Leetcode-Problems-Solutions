class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> ans;
		unordered_map<int, int> map;
		for(int i=0; i<numbers.size(); i++)
        {
			if(map.find(target - numbers[i]) != map.end())
            {
				ans.push_back(map[target - numbers[i]]+1);
				ans.push_back(i+1);
				return ans;
			}
			else 
				map[numbers[i]] = i;
		}
		return ans;
    }
};