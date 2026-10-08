class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i =0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        set<int>st;
        for(int i = 0;i<arr.size();i++){
            if(mp[arr[i]]==0){
                continue;
            }
            int freq = mp[arr[i]];
            if(st.count(freq)>0){
                return false;
            }
            st.insert(freq);
            mp[arr[i]]=0;
        }
        return true;
        
    }
};