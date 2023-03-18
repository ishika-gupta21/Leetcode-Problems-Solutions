class BrowserHistory {
    stack<string> s,t;
public:
    BrowserHistory(string homepage) {
        s.push(homepage); 
    }

    void visit(string url) {
        s.push(url); 
        while(!t.empty()) t.pop(); 
    }
    
    string back(int steps) {
        while(s.size() > 1 && steps--)
        {
            t.push(s.top());
            s.pop(); 
        }
        return s.top(); 
    }
    
    string forward(int steps) {
        while(t.size()>0 && steps--)
        {
            s.push(t.top()); 
            t.pop(); 
        }
        return s.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */