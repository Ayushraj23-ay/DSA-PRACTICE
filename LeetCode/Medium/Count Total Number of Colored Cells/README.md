# Count Total Number of Colored Cells

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | November 6, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/count-total-number-of-colored-cells/) |
| **Runtime** | 0 ms |
| **Memory** | 7.7 MB |

## Problem Description

<p>There exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer <code>n</code>, indicating that you must do the following routine for <code>n</code> minutes:</p>

<ul>
	<li>At the first minute, color <strong>any</strong> arbitrary unit cell blue.</li>
	<li>Every minute thereafter, color blue <strong>every</strong> uncolored cell that touches a blue cell.</li>
</ul>

<p>Below is a pictorial representation of the state of the grid after minutes 1, 2, and 3.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2023/01/10/example-copy-2.png" style="width: 500px; height: 279px;">
<p>Return <em>the number of <strong>colored cells</strong> at the end of </em><code>n</code> <em>minutes</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> After 1 minute, there is only 1 blue cell, so we return 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 5
<strong>Explanation:</strong> After 2 minutes, there are 4 colored cells on the boundary and 1 in the center, so we return 5. 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅ 100% Solution Explained (Intuition + Code Explanation)
**Author**: [@dailyleetcoder](https://leetcode.com/dailyleetcoder/)
**Upvotes**: 20 👍
**Link**: [View Original Post](https://leetcode.com/problems/count-total-number-of-colored-cells/solutions/3256663/)

---

# Intuition
1, 3, 5,..., 2 * i - 1, ..., 2 * n - 1 = n * n.
1, 3, 5,..., 2 * i - 1, ..., 2 * n - 3 = (n - 1) * (n - 1)

These two arithmetic sequences represent the number of cells on each row of the upper half and lower half of the grid, respectively.

For the first sequence, we start with 1 (which represents the number of cells on the first row of the upper half of the grid) and increment by 2 for each subsequent row. This gives us the sequence:

1, 3, 5, ..., 2n-1

The last term in this sequence (2n-1) represents the number of cells on the last row of the upper half of the grid. If we sum up all the terms in this sequence, we get:

1 + 3 + 5 + ... + 2n-1

This is equivalent to the sum of the first n odd numbers, which is n^2. Therefore, we can represent this sequence as:

1, 3, 5, ..., 2n-1 = n^2

For the second sequence, we start with 1 (which represents the number of cells on the first row of the lower half of the grid) and increment by 2 for each subsequent row. This gives us the sequence:

1, 3, 5, ..., 2n-3

The last term in this sequence (2n-3) represents the number of cells on the last row of the lower half of the grid. If we sum up all the terms in this sequence, we get:

1 + 3 + 5 + ... + 2n-3

This is equivalent to the sum of the first (n-1) odd numbers, which is (n-1)^2. Therefore, we can represent this sequence as:

1, 3, 5, ..., 2n-3 = (n-1)^2

These two sequences together represent the total number of cells on each row of the grid. The sum of the squares of these sequences gives us the total number of cells that will be colored blue after n minutes. Therefore, the provided code calculates the total number of colored cells as:

n^2 + (n-1)^2 

which is the sum of the squares of the two sequences.

# Complexity
- Time complexity: $$O(1)$$

- Space complexity: $$O(1)$$

# Code
```
class Solution {
public:
    long long coloredCells(int n) {
        return (long long)n * n + (long long)(n - 1) * (n - 1);
    }
};
```

</details>
