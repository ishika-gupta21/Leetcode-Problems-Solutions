class Solution {
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        int len = tasks.size(), mostFreq = INT_MIN, mostFreqQuantity, freqs[26] = {};
        if (!n) return len;
        for (auto e: tasks) freqs[e - 'A']++;
        for (int n: freqs)
        {
            if (n == mostFreq)
                mostFreqQuantity++;
            else if (n > mostFreq)
                mostFreq = n, mostFreqQuantity = 1;
        }
        return max(len, (mostFreq - 1) * (n + 1) + mostFreqQuantity);
    }
};