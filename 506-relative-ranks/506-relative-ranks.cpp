class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        priority_queue<pair<int,int>> pq;
        int i=0;
        while(i<score.size())
        {
            pq.push({score[i],i});
            i++;
        }
        vector<string> ans(score.size());
        int j=1;
        while(j<=score.size())
        {
            ans[pq.top().second]=j==1?"Gold Medal":j==2?"Silver Medal":j==3?"Bronze Medal":to_string(j);
            j++;
            pq.pop();
        }
        return ans;
    }
};