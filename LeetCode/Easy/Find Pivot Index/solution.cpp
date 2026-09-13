class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        int totalSum = 0;

        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int prefix = 0;

        for(int i = 0; i < n; i++) {

            int ans = totalSum - prefix - nums[i];

            if(ans == prefix) {
                return i;
            }

            prefix += nums[i];
        }

        return -1;
    }
};