# Sort Array By Parity

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 10, 2026 |
| **Tags** | Array, Two Pointers, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/sort-array-by-parity/) |
| **Runtime** | 0 ms |
| **Memory** | 20.9 MB |

## Problem Description

<p>Given an integer array <code>nums</code>, move all the even integers at the beginning of the array followed by all the odd integers.</p>

<p>Return <em><strong>any array</strong> that satisfies this condition</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,1,2,4]
<strong>Output:</strong> [2,4,3,1]
<strong>Explanation:</strong> The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> [0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 5000</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [c++] fast and easy solution using two pointer algorithm
**Author**: [@Sanjeev1709912](https://leetcode.com/Sanjeev1709912/)
**Upvotes**: 77 👍
**Link**: [View Original Post](https://leetcode.com/problems/sort-array-by-parity/solutions/797046/)

---

**Two pointer approch **
please upvote my solution if you like it
\'\'\'
class Solution {
public:

    vector<int> sortArrayByParity(vector<int>& A) {
        int j=0;
        for(int i=0;i<A.size();i++)
		{
            if(A[i]%2==0)
			{
                swap(A[i],A[j]);
                j++;
			}
		}
        return A;
    }
};
\'\'\'

</details>
