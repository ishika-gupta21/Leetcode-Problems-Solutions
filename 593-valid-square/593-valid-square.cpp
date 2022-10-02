class Solution {
public:
    int distance(vector<int> a, vector<int> b)
    {
        return ((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        set<int> s;
        s.insert(distance(p1,p2));
        s.insert(distance(p1,p3));
        s.insert(distance(p1,p4));
        s.insert(distance(p2,p3));
        s.insert(distance(p2,p4));
        s.insert(distance(p3,p4));
        return s.find(0)==s.end() && s.size()==2;
    }
};