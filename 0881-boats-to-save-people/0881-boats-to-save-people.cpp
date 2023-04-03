class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        int res = people.size(), i = 0, j = res - 1;
        sort(begin(people), end(people));
        while(i < j) 
        {
            if (people[i] + people[j] <= limit) 
            {
                res--;
                i++;
            }
            j--;
        }
        return res;
    }
};