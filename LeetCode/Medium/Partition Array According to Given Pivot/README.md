# Partition Array According to Given Pivot

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 7, 2026 |
| **Tags** | Array, Two Pointers, Simulation |
| **Link** | [View Problem](https://leetcode.com/problems/partition-array-according-to-given-pivot/) |
| **Runtime** | 12 ms |
| **Memory** | 127.8 MB |

## Problem Description

<p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> and an integer <code>pivot</code>. Rearrange <code>nums</code> such that the following conditions are satisfied:</p>

<ul>
	<li>Every element less than <code>pivot</code> appears <strong>before</strong> every element greater than <code>pivot</code>.</li>
	<li>Every element equal to <code>pivot</code> appears <strong>in between</strong> the elements less than and greater than <code>pivot</code>.</li>
	<li>The <strong>relative order</strong> of the elements less than <code>pivot</code> and the elements greater than <code>pivot</code> is maintained.
	<ul>
		<li>More formally, consider every <code>p<sub>i</sub></code>, <code>p<sub>j</sub></code> where <code>p<sub>i</sub></code> is the new position of the <code>i<sup>th</sup></code> element and <code>p<sub>j</sub></code> is the new position of the <code>j<sup>th</sup></code> element. If <code>i &lt; j</code> and <strong>both</strong> elements are smaller (<em>or larger</em>) than <code>pivot</code>, then <code>p<sub>i</sub> &lt; p<sub>j</sub></code>.</li>
	</ul>
	</li>
</ul>

<p>Return <code>nums</code><em> after the rearrangement.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [9,12,5,10,14,3,10], pivot = 10
<strong>Output:</strong> [9,5,3,10,10,12,14]
<strong>Explanation:</strong> 
The elements 9, 5, and 3 are less than the pivot so they are on the left side of the array.
The elements 12 and 14 are greater than the pivot so they are on the right side of the array.
The relative ordering of the elements less than and greater than pivot is also maintained. [9, 5, 3] and [12, 14] are the respective orderings.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-3,4,3,2], pivot = 2
<strong>Output:</strong> [-3,2,4,3]
<strong>Explanation:</strong> 
The element -3 is less than the pivot so it is on the left side of the array.
The elements 4 and 3 are greater than the pivot so they are on the right side of the array.
The relative ordering of the elements less than and greater than pivot is also maintained. [-3] and [4, 3] are the respective orderings.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>6</sup> &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
	<li><code>pivot</code> equals to an element of <code>nums</code>.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 🚩inplace NlogN ^^
**Author**: [@andrii_khlevniuk](https://leetcode.com/andrii_khlevniuk/)
**Upvotes**: 43 👍
**Link**: [View Original Post](https://leetcode.com/problems/partition-array-according-to-given-pivot/solutions/1752535/)

---

**divide and conquer**
**time: `O(NlogN)`; space: `O(1)`**
```
vector<int> pivotArray(vector<int>& n, int p) 
{
	for(int d{2}; d<2*size(n); d<<=1)
		for(auto b{begin(n)}, m{b}, e{b}; b<end(n); b=e)
		{
			m = min(b+d/2, end(n)),
			e = min(b+d,   end(n));
			auto l = lower_bound(b, m, p),
				 h = upper_bound(m, e, p);
			rotate(l, m, h);
		}
	return n;
}
```
**Notation:**
`d` - current chunk size (power of two) `= 2,4,8...`;
`b` - **b**eginning of the merge chunk;
`m` - **m**iddle of the merge chunk;
`e` - **e**nd of the merge chunk;
`l` and `h` come from "**l**ow" and "**h**igh".




<br>
Divide and conquer technique example:

![image](https://assets.leetcode.com/users/images/979172d3-7ce1-48a5-8791-5a3f83e74c53_1644324325.273362.png)

<br>
<br>

Single "merge" operation example:

<br>

![image](https://assets.leetcode.com/users/images/bab7e9ae-9f12-4096-a7ff-5c2584071652_1644281995.6568372.png)

<br>

Another problem that uses partition as a subproblem [2149.  Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/discuss/1729673/4-solutions)

</details>
