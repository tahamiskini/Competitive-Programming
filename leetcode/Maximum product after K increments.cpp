class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int mod = 1000000007;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);
        while(k--){
            int x = pq.top();
            x++;
            pq.pop();
            pq.push(x);
        }
       long long int p = 1;
        while(!pq.empty()){
            int p1 = pq.top();
            p*= p1;
            p%=mod;
            pq.pop();
        }
        return p;
    }
};