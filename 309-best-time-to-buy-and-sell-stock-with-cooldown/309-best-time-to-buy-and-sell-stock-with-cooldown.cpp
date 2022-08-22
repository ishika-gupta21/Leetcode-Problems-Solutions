class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int sold=0;
		int hold=INT_MIN;
		int res=0;
		for(auto x:prices)
        {
			int pre_res=res;
			res=max(res,sold);
			sold=hold+x;
			hold=max(hold,pre_res-x);
		} 
		return max(sold,res);
    }
};