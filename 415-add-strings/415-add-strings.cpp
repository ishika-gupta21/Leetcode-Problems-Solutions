class Solution {
public:
    string addStrings(string num1, string num2) 
    {
          if(num1.size() > num2.size()) swap(num1,num2);
          int rest = 0, i = num1.size() - 1, j = num2.size() - 1;
          while(i >= 0)
          {
            rest += num2[j] + num1[i--] - 96;
            num2[j--] = rest%10 + 48;
            rest /= 10;
          }
          while(j >= 0 && rest)
          {                                        
            rest += num2[j] - 48;
            num2[j--] = rest%10 + 48;
            rest /= 10;
          }
        return rest ? "1" + num2 : num2;
    }
};