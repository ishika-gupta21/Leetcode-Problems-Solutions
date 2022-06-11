// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        int i=0,j=n-1,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(isBadVersion(mid))
                j=mid-1;
            else i=mid+1;
        }
        return i;
    }
};