class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int left = 0;
        for(int i : nums){
            total += i;
        }
        for(int i = 0; i < nums.size(); i++){
            total -= nums[i];
            if(left == total){
                return i;
            }
            left += nums[i];
        }
        return -1; 
    }
};