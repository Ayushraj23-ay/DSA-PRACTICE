
class Solution {
public:
    int minOperations(vector<int>& nums) {

        int ans = 0;
        for(int i = 1; i < nums.size(); i++) {
            while(nums[i] <= nums[i-1]) {
                nums[i]++;
                ans++;
            }
        }
        return ans;
    }
};
