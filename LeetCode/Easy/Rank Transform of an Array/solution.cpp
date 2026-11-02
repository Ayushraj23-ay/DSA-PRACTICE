class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr1 = arr;
        vector<int> ans;
        sort(arr1.begin(), arr1.end());
        unordered_map<int, int> mp;
        int r = 1;
        for(int i = 0; i < arr1.size(); i++) {
            if(mp[arr1[i]] == 0) {
                mp[arr1[i]] = r;
                r++;
            }
        }
        for(int i = 0; i < arr.size(); i++) {
            ans.push_back(mp[arr[i]]);
        }

        return ans;
    }
};