class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        vector<int> st;
        for(int asteroid : asteroids) 
        {
            if(asteroid >= 0) 
                st.push_back(asteroid);
            else
            {
                while(st.size() > 0 && st.back() > 0 && st.back() < -asteroid)
                    st.pop_back();
                if(st.size() > 0 && st.back() == -asteroid) 
                    st.pop_back();
                else if(st.size() > 0 && st.back() > -asteroid) { }
                else st.push_back(asteroid);
            }
        }
        return st;
    }
};