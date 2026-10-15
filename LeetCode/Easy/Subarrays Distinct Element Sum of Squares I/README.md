# Subarrays Distinct Element Sum of Squares I

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 15, 2026 |
| **Tags** | Array, Hash Table, Binary Indexed Tree, Segment Tree |
| **Link** | [View Problem](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/) |
| **Runtime** | 37 ms |
| **Memory** | 36.3 MB |

## Problem Description

<p>You are given a <strong>0-indexed </strong>integer array <code>nums</code>.</p>

<p>The <strong>distinct count</strong> of a subarray of <code>nums</code> is defined as:</p>

<ul>
	<li>Let <code>nums[i..j]</code> be a subarray of <code>nums</code> consisting of all the indices from <code>i</code> to <code>j</code> such that <code>0 &lt;= i &lt;= j &lt; nums.length</code>. Then the number of distinct values in <code>nums[i..j]</code> is called the distinct count of <code>nums[i..j]</code>.</li>
</ul>

<p>Return <em>the sum of the <strong>squares</strong> of <strong>distinct counts</strong> of all subarrays of </em><code>nums</code>.</p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,1]
<strong>Output:</strong> 15
<strong>Explanation:</strong> Six possible subarrays are:
[1]: 1 distinct value
[2]: 1 distinct value
[1]: 1 distinct value
[1,2]: 2 distinct values
[2,1]: 2 distinct values
[1,2,1]: 2 distinct values
The sum of the squares of the distinct counts in all subarrays is equal to 1<sup>2</sup> + 1<sup>2</sup> + 1<sup>2</sup> + 2<sup>2</sup> + 2<sup>2</sup> + 2<sup>2</sup> = 15.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Three possible subarrays are:
[1]: 1 distinct value
[1]: 1 distinct value
[1,1]: 1 distinct value
The sum of the squares of the distinct counts in all subarrays is equal to 1<sup>2</sup> + 1<sup>2</sup> + 1<sup>2</sup> = 3.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Brute-force solution || Very simple and easy to understand solution
**Author**: [@kreakEmp](https://leetcode.com/kreakEmp/)
**Upvotes**: 9 👍
**Link**: [View Original Post](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/solutions/4218771/)

---



# Approach
- Simply iterate over eash subarray and count the distict element in each sub array
- For this we start with ith and end at jth index 

```
int sumCounts(vector<int>& nums) {
    int ans = 0, count = 0;
    for(int i = 0; i < nums.size(); ++i){
        unordered_map<int, int> ump; count = 0;
        for(int j = i; j < nums.size(); ++j){
            ump[nums[j]]++;
            if(ump[nums[j]] == 1) count++;
            ans += count*count;
        }
    }
    return ans;
}
```

---


<b>Here is an article of my last interview experience - A Journey to FAANG Company, I recomand you to go through this to know which all resources I have used & how I cracked interview at Amazon:
https://leetcode.com/discuss/interview-experience/3171859/Journey-to-a-FAANG-Company-Amazon-or-SDE2-(L5)-or-Bangalore-or-Oct-2022-Accepted

---

</details>
