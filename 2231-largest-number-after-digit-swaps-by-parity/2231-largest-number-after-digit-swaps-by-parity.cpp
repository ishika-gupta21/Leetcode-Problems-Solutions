class Solution {
public:
    int largestInteger(int num) 
    {
        priority_queue<int> p;
		priority_queue<int> q;
		string s=to_string(num);
		int n=s.size();
		for(int i=0;i<n;i++)
        {
			int temp=s[i]-'0';
			if(temp % 2) 
				p.push(temp);
			else
				q.push(temp);
		}
		int ans=0;
		for(int i=0;i<n ;i++)
        {
			ans=ans*10;
			if((s[i]-'0')%2)
            {
				ans+=p.top();
				p.pop();
			}
			else
            {
				ans+=q.top();
				q.pop();
			}
		}
		return ans;
    }
};