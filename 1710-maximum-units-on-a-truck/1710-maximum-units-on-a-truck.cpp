class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        priority_queue<pair<int,int>> pq;
        for(vector<int> v:boxTypes)
            pq.push({v[1],v[0]});
        int count=0,units=0;
        while(!pq.empty() && count<truckSize)
        {
            if(count+pq.top().second<truckSize)
            {
                units+=pq.top().second*pq.top().first;
                count+=pq.top().second;
                pq.pop();
            }
            else
            {
                int quantity=truckSize-count;
                count+=quantity;
                units+=quantity*pq.top().first;
                pq.pop();
            }
        }
        return units;
    }
};