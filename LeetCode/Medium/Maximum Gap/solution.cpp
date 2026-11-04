class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int output = 0;
        for(int i = 1; i < n; i++) {
            int diff = nums[i] - nums[i-1];
            output = max(output, diff);
        }
        return output;
    }
};