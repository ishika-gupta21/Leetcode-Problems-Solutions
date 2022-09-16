class RecentCounter {
public:
    queue<int> req;
    RecentCounter(){   
    } 
    int ping(int t) 
    {
        while(!req.empty() && req.front()+3000<t)
            req.pop();
        req.push(t);
        return req.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */