class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int left(0),right(n-1),sum;
        vector<int>answer;
        while(left<right){
            sum = numbers[left]+numbers[right];
            if(sum == target){
                answer.push_back(left+1);
                answer.push_back(right+1);
                break;
            }
            else if(target<sum){
                right--;
            }
            else left++;
        }
        return answer;
    }
};
