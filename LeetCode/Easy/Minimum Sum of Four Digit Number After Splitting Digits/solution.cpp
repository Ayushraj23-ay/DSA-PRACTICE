class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;
        while(num>0){
        int a = 0;
        a=num%10;
        ans.push_back(a);
        num=num/10; 
        }
        sort(ans.begin(),ans.end());
        int nums1 = ans[0]*10+ans[2];
        int nums2 = ans[1]*10+ans[3]; 
        return nums1+nums2;
        
    }
};