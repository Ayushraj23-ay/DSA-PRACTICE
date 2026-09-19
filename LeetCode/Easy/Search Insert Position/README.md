# Search Insert Position

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 19, 2026 |
| **Tags** | Array, Binary Search |
| **Link** | [View Problem](https://leetcode.com/problems/search-insert-position/) |
| **Runtime** | 0 ms |
| **Memory** | 13.7 MB |

## Problem Description

<p>Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 5
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 2
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,5,6], target = 7
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> contains <strong>distinct</strong> values sorted in <strong>ascending</strong> order.</li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy and Simple C++ approach | Binary search :)
**Author**: [@Scaar](https://leetcode.com/Scaar/)
**Upvotes**: 625 👍
**Link**: [View Original Post](https://leetcode.com/problems/search-insert-position/solutions/3409777/)

---


# Approach
- `binary seaerch` approach is damn easy for this question and also easy to think of it.
- the array is sorted so we just have to fugure out where should it be placed.
- so we just have to figure out the position at which the `prevoius value` is less that our element and `next` value is more than our element.
- Thats how its figured out that it\'s a binary seach problem.
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity: O(log(n))
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## `Upvote! It only takes 1 click :)`

# Code
```
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high){
              mid=(low+high)/2;
            if(nums[mid]==target){  
                return mid;
            }
          
            if(target<nums[mid]){     
            high=mid-1;    
            }else{
            low=mid+1;        
            }
          
        }
         return  low;   
    }
};
```
![Upvote.jpeg](https://assets.leetcode.com/users/images/90815d9e-dd68-4cea-952b-fe2b97fb5c17_1681320439.5123947.jpeg)


</details>
