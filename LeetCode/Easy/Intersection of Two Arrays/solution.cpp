class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st;

        for(int x : nums1) {
            st.insert(x);
        }

        unordered_set<int> ans;

        for(int x : nums2) {

            if(st.find(x) != st.end()) {
                ans.insert(x);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};