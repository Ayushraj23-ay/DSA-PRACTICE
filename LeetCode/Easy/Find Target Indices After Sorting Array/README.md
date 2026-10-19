# Find Target Indices After Sorting Array

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 19, 2026 |
| **Tags** | Array, Binary Search, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/find-target-indices-after-sorting-array/) |
| **Runtime** | 0 ms |
| **Memory** | 15.1 MB |

## Problem Description

<p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> and a target element <code>target</code>.</p>

<p>A <strong>target index</strong> is an index <code>i</code> such that <code>nums[i] == target</code>.</p>

<p>Return <em>a list of the target indices of</em> <code>nums</code> after<em> sorting </em><code>nums</code><em> in <strong>non-decreasing</strong> order</em>. If there are no target indices, return <em>an <strong>empty</strong> list</em>. The returned list must be sorted in <strong>increasing</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,5,2,3], target = 2
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> After sorting, nums is [1,<u><strong>2</strong></u>,<u><strong>2</strong></u>,3,5].
The indices where nums[i] == 2 are 1 and 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,5,2,3], target = 3
<strong>Output:</strong> [3]
<strong>Explanation:</strong> After sorting, nums is [1,2,2,<u><strong>3</strong></u>,5].
The index where nums[i] == 3 is 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,5,2,3], target = 5
<strong>Output:</strong> [4]
<strong>Explanation:</strong> After sorting, nums is [1,2,2,3,<u><strong>5</strong></u>].
The index where nums[i] == 5 is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i], target &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ | Two Methods with explanation | O(N) and O(N log N) approach | Easy to understand
**Author**: [@joyetahpr](https://leetcode.com/joyetahpr/)
**Upvotes**: 35 👍
**Link**: [View Original Post](https://leetcode.com/problems/find-target-indices-after-sorting-array/solutions/1609499/)

---

**Two methods discussed with explanation.**

**Method 1:**
	**1.** First sort the array.
	**2.** Find the index of the target
	**3.** Push it into the **"result"** vector.

```
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) result.push_back(i);
        }
        return result;
    }
};
```

**Time Complexity :** O(N log N)


**Method 2:**
	**1.** Count the occurences of elements lesser then the target and freq of target elements.
* 			"small" contains the number of element lesser than the target.
* 			"count" contains the number of occurences of the target element.
**2.** Now run a loop from **"small"** ( means **"small"** elements are lesser than our target value, so our target value will come after **"small"** elements in sorted array ), upto **"count"**.
**3.** Push the index into the **"result"** vector.
						
```
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small=0,count=0,k=0;
        for(auto n:nums) {
            if(n<target)    small++;                                        // calculates the frequency of elements lesser than the target
            if(n==target)   count++;                                        // calculate the number of occurences of the target element
        }
        vector<int> result(count);
        for(int i=small;i<small+count;i++)      
            result[k++]=i;
        return result;
    }
};
```

**Time Complexity :** O(N)

If you liked the solution, then please upvote : )

</details>
