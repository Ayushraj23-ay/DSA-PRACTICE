// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == target){
//                 return i;
//             } 
        
//         }
//         return -1;
//     }
// };






//second method binary search


class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while(low <= high) {

            int mid = (low + high) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            // Left half sorted hai
            if(nums[low] <= nums[mid]) {

                if(target >= nums[low]) {

                    if(target < nums[mid]) {
                        high = mid - 1;
                    }
                    else {
                        low = mid + 1;
                    }

                }
                else {
                    low = mid + 1;
                }
            }

            // Right half sorted hai
            else {

                if(target > nums[mid]) {

                    if(target <= nums[high]) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }

                }
                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};
