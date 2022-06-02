class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        double s;
        if(coordinates[1][0]-coordinates[0][0])
            s=(coordinates[1][1]-coordinates[0][1])*1.0/(coordinates[1][0]-coordinates[0][0])*1.0;
        else
            s=INT_MAX;
        int n=coordinates.size();
        for(int i=2;i<n;i++)
        {
            double temp;
            if((coordinates[i][0]-coordinates[i-1][0])==0)
                temp=INT_MAX;
            else
                temp=(coordinates[i][1]-coordinates[i-1][1])*1.0/(coordinates[i][0]-coordinates[i-1][0])*1.0;
            if(temp!=s)
                return false;
        }
        return true;
    }
};