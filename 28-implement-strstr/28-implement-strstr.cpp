class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int h = haystack.size(), n = needle.size();
        if(!n) 
            return 0;
        if(n>h) 
            return -1;
        int found = haystack.find(needle);
        return found;
    }
};