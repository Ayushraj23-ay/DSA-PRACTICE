class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            ans = ans + nums[r]-nums[l];
            l++;
            r--;
        }
        if(l==r){
            ans = ans+nums[l];
        }
        return ans;
           
    

    }
    //return ans;
    

};