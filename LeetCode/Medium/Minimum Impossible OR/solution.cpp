class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {

        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int n = 1;
        while(st.count(n) > 0) {
            n = n * 2;
        }
        return n;
    }
};