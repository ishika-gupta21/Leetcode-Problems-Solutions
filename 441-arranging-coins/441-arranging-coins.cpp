class Solution {
public:
    int arrangeCoins(int n) 
    {
        long long low = 0;
	    long long high = n;
	    while(low <= high)
	    {
		    long long mid = low + (high - low)/2;
		    if((mid*(mid+1))/2 > n)
			    high = mid-1;
		    else if((mid*(mid+1))/2 < n)
			    low = mid+1;
		    else
			    return mid;
	    }
	    return high;
    }
};