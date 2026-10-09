# Sum of Unique Elements

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 10, 2026 |
| **Tags** | Array, Hash Table, Counting |
| **Link** | [View Problem](https://leetcode.com/problems/sum-of-unique-elements/) |
| **Runtime** | 0 ms |
| **Memory** | 10.6 MB |

## Problem Description

<p>You are given an integer array <code>nums</code>. The unique elements of an array are the elements that appear <strong>exactly once</strong> in the array.</p>

<p>Return <em>the <strong>sum</strong> of all the unique elements of </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The unique elements are [1,3], and the sum is 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,1,1,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no unique elements, and the sum is 0.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4,5]
<strong>Output:</strong> 15
<strong>Explanation:</strong> The unique elements are [1,2,3,4,5], and the sum is 15.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Simple and short C++ solution
**Author**: [@sohita](https://leetcode.com/sohita/)
**Upvotes**: 12 👍
**Link**: [View Original Post](https://leetcode.com/problems/sum-of-unique-elements/solutions/1102811/)

---

```
class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
       int sum=0;
       map<int,int>mp;
        
       for(auto x:nums)
       mp[x]++;
        
       for(auto m:mp)
       {
           if(m.second==1)
               sum+=m.first;
       }
        return sum;
    }
};
```

</details>
