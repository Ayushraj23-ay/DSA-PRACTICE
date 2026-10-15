class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>vt;
        for(int i = 0;i<nums.size();i++){
            vt.push_back(nums[nums[i]]);
        }
        return vt;
    }
};