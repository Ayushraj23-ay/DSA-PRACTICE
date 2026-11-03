# How Many Numbers Are Smaller Than the Current Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 3, 2026 |
| **Tags** | Array, Hash Table, Sorting, Counting Sort |
| **Link** | [View Problem](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/) |
| **Runtime** | 10 ms |
| **Memory** | 14.2 MB |

## Problem Description

<p>Given the array <code>nums</code>, for each <code>nums[i]</code> find out how many numbers in the array are smaller than it. That is, for each <code>nums[i]</code> you have to count the number of valid <code>j's</code>&nbsp;such that&nbsp;<code>j != i</code> <strong>and</strong> <code>nums[j] &lt; nums[i]</code>.</p>

<p>Return the answer in an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [8,1,2,2,3]
<strong>Output:</strong> [4,0,1,1,3]
<strong>Explanation:</strong> 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [6,5,4,8]
<strong>Output:</strong> [2,1,0,3]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [7,7,7,7]
<strong>Output:</strong> [0,0,0,0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 500</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ Solution along with Explanation and Time Complexity
**Author**: [@Longhorn_65](https://leetcode.com/Longhorn_65/)
**Upvotes**: 121 👍
**Link**: [View Original Post](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/solutions/1214105/)

---

**AN UPVOTE WOULD BE HIGHLY APPRECIATED !!!**

*Overload the comments section with doubts and praises if you have.!!!*
```
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> vec = nums;
        int n = nums.size();
        
        // Sort vec in ascending order
        // T.C = O(nlogn)
        sort(vec.begin(), vec.end());
        
        // Put the values in hash-map according to their values corresponding to their places in nums 
        // T.C = O(n)
        for(int i=n-1; i>=0; i--) {
            m[vec[i]] = i;
        }
        
        // Saving the result again in nums, b\'cos space complexity matters XD
        // T.C = O(n)
        for(int i=0; i<n; i++) {
            nums[i] = m[nums[i]];
        }
        
        return nums;
    }
};
```

</details>
