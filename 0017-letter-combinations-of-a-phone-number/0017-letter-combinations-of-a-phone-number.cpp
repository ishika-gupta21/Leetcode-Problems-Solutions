class Solution {
public:
    void backtrack(unordered_map<char, string>& hashmap, vector<string>& result, string& digits, string& text, int cur)
    {
        if(cur == digits.length())
        {
            result.push_back(text);
            return;
        }
        for(char i: hashmap[digits[cur]])
        {
            text += i;
            backtrack(hashmap, result, digits, text, cur+1);
            text.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if(digits == "") return {};
        vector<string> result;
        unordered_map<char, string> hashmap;
        hashmap['2'] = "abc";
        hashmap['3'] = "def";
        hashmap['4'] = "ghi";
        hashmap['5'] = "jkl";
        hashmap['6'] = "nmo";
        hashmap['7'] = "pqrs";
        hashmap['8'] = "tuv";
        hashmap['9'] = "wxyz";
        string text = "";
        backtrack(hashmap, result, digits, text, 0);
        return result;
    }
};