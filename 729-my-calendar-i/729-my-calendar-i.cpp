class MyCalendar {
public:
    vector<pair<int, int>> m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) 
    {
        // mp[start]++;
        // mp[end]--;
        // int sum=0;
        // for(auto it=mp.begin(); it!=mp.end(); it++)
        // {
        //     sum += it->second;
        //     if(sum>1)
        //     {
        //         mp[start]--;
        //         mp[end]++;
        //         return false;
        //     }
        // }
        // return true;
        for (auto it : m)
        {
            if(it.first<end && start<it.second)
                return false;
        }
        m.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */