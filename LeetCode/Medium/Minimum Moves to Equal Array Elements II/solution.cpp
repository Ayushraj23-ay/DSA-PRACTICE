class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        int count = 0;
        int mid = nums.size()/2;
        while(left<=right){
            count = count + abs(nums[left]-nums[mid]);
            left++;
        }
        return count;

    }
};