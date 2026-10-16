class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroes = 0;
        int start = 0;
        int end = 0;
        int longest = 0;

        while (true) {
            if (zeroes <= 1) {
                if (end < nums.size()) {
                    if (nums[end] == 0) {
                        zeroes += 1;
                    }
                    end++;
                }
                else {
                    break;
                }
            }
            else {
                if (start < nums.size()) {
                    if (nums[start] == 0) {
                        zeroes -= 1;
                    }
                    start++;
                }
                else {
                    break;
                }
            }

            if (zeroes <= 1) {
                longest = max(longest, end - start);
            }
        }
        return longest - 1;
    }
};