class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int count = 0;
        while(left<right){
            count += nums[right]-nums[left];
            
            right--;
        }
        return count;
    }
};