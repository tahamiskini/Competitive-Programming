class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int mx = -1; 
        for(auto const&[key,value]:mp){
            if(key == value) mx = max(mx,key) ;
        }
        return mx;
    }
};