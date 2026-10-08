class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        set<int> st;
        int duplicate = 0;
        int missing = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(st.count(nums[i])) {
                duplicate = nums[i];
            }
            else {
                st.insert(nums[i]);
            }
        }

        for(int i = 1; i <= nums.size(); i++) {
            if(st.count(i)==0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};