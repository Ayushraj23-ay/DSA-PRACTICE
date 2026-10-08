class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        set<int> st2;
        for(int i = 0;i<nums1.size();i++){
            st1.insert(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            st2.insert(nums2[i]);

        }
        vector<int>ans1;
        vector<int>ans2;
        for(int x : st1){
            if(st2.count(x)==0){
                ans1.push_back(x);
            }

        }
        for(int x : st2){
            if(st1.count(x)==0){
                ans2.push_back(x);
            }
        }
        return {ans1,ans2};


    }  
};