class Solution {
public:
    int minCost(string colors, vector<int>& neededTime)
    { 
         int answer=0;
         for(int i=1;i<neededTime.size();i++)
         {
            if(colors[i-1]==colors[i])
            {
                answer+=min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
         } 
         return answer;
    }
};