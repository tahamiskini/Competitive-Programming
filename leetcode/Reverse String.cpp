class Solution {
public:
    void reverseString(vector<char>& s) {
        int low(0),hight(s.size()-1);
        while(low<hight){
            swap(s[low++],s[hight--]);
            
        }
    }
};

