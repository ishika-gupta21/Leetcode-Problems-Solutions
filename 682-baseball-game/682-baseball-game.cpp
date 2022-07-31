class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        int n = ops.size();
        stack<int> r;
        r.push(stoi(ops[0]));
        for(int i=1;i<n;i++)
        {
            if(ops[i]=="+")
            {
                int t=r.top();
                r.pop();
                int k =r.top();
                int m = t+k;
                r.push(t);
                r.push(m);
            }
            else if(ops[i]=="C")
            {
                r.pop();
            }
            else if(ops[i]=="D")
            {
                int t=r.top();
                int m = 2*t;
                r.push(m);
            }
            else
            {
                r.push(stoi(ops[i]));
            }
        }
       int sum=0;
       while(!r.empty())
       {
           int t = r.top();
           r.pop();
           sum+=t;
       }
        return sum;
    }
};