class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        /*
         float p1, p2, c1, c2;
        p1 = (v[1][1]-v[0][1]);
        p2 = (v[1][0]-v[0][0]);
        for(int i=2; i<v.size(); i++) {
            c1 = (v[i][1]-v[i-1][1]);
            c2 = (v[i][0]-v[i-1][0]);
            if(p2*c1 != p1*c2) return false;
            p1=c1; p2=c2;
        }
        return true; */
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