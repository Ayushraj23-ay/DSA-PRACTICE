
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for(int j = i; j < nums.size(); j++) {
                sum = sum + nums[j];
                if(j - i + 1 >= l && j - i + 1 <= r) {
                    if(sum > 0 && sum < ans) {
                        ans = sum;
                    }
                }
            }
        }
        if(ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
};
