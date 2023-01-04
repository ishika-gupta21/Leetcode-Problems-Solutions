class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int> mp;
        for(auto i:tasks)   
            mp[i]++;
        int ans=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second==1)    
                return -1;
            if(i->second%3==0) 
                ans+=((i->second)/3);
            else if(i->second<6)
                if(i->second==2) 
                    ans+=1;
                else ans+=2;
            else
            {
                ans+=((((i->second)/6)*2));
                i->second%=6;
                if(i->second==4 || i->second==5)  
                    ans+=2;
                else  
                    ans+=1;
            }
        }
        return ans;
    }
};