class Solution {
public:
    int countSegments(string s) {
        if(s=="")return 0;
        int res=0;
        for(int i=0;i<s.size();i++){
        if((s[i] != ' ')and((s[i+1] == ' ')or(s[i+1]=='\0'))) res++;
        }
        
        return res;
    }
};