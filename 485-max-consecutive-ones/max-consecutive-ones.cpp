class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int maxi = 0;
        while (right < nums.size()) {
            if (nums[right] == 1) {
                maxi = max(maxi, right - left + 1);
                right++;
            } 
            else {
                right++;
                left = right;
            }
        }
        return maxi;
    }
};
