class Solution {
public:
    vector<int>re;
    vector<int>re2;
    Solution(vector<int>& nums) 
    {
        re=nums;
        re2=nums;
    }    
    vector<int> reset()
    {
        return re2;
    }
    vector<int> shuffle()
    {
        int num1=rand()%re.size();
        int num2=rand()%re.size();
        swap(re[num1],re[num2]);
        return re;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */