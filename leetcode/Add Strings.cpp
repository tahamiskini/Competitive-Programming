#include <string>

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size() - 1;
        int n2 = num2.size() - 1;
        int esti7fadh = 0;
        string res = "";
        
        while (n1 >= 0 or n2 >= 0 or esti7fadh>0) {
            int dig1 = n1 >= 0 ? num1[n1--] - '0' : 0;
            int dig2 = n2 >= 0 ? num2[n2--] - '0' : 0;
            int sum = dig1 + dig2 + esti7fadh;
            esti7fadh = sum / 10;
            sum %= 10;
            res = to_string(sum) + res;
        }
        
        return res;
    }
};
