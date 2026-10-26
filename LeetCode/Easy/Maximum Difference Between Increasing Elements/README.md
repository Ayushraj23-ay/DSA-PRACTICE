# Maximum Difference Between Increasing Elements

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 27, 2026 |
| **Tags** | Array |
| **Link** | [View Problem](https://leetcode.com/problems/maximum-difference-between-increasing-elements/) |
| **Runtime** | 5 ms |
| **Memory** | 12 MB |

## Problem Description

<p>Given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>n</code>, find the <strong>maximum difference</strong> between <code>nums[i]</code> and <code>nums[j]</code> (i.e., <code>nums[j] - nums[i]</code>), such that <code>0 &lt;= i &lt; j &lt; n</code> and <code>nums[i] &lt; nums[j]</code>.</p>

<p>Return <em>the <strong>maximum difference</strong>. </em>If no such <code>i</code> and <code>j</code> exists, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [7,<strong><u>1</u></strong>,<strong><u>5</u></strong>,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i &gt; j, so it is not valid.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [9,4,3,2]
<strong>Output:</strong> -1
<strong>Explanation:</strong>
There is no i and j such that i &lt; j and nums[i] &lt; nums[j].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [<strong><u>1</u></strong>,5,2,<strong><u>10</u></strong>]
<strong>Output:</strong> 9
<strong>Explanation:</strong>
The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>2 &lt;= n &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅☑️ Beats 100% || Easiest Possible Solution || Beginner friendly
**Author**: [@im_sumit](https://leetcode.com/im_sumit/)
**Upvotes**: 6 👍
**Link**: [View Original Post](https://leetcode.com/problems/maximum-difference-between-increasing-elements/solutions/4961411/)

---

image.png
![image.png](https://assets.leetcode.com/users/images/2a4eb526-9837-4315-8eb9-935119db8c00_1712041220.9211383.png)
# Intuition
**Iterating through the list:**

For each element i in the input list nums, the code checks whether i is less than or equal to the current minimum value minn.

If i is less than or equal to minn, it updates minn to i, effectively updating the minimum value seen so far.

If i is greater than minn, it calculates the difference between i and minn and checks if it is greater than the current maximum difference diff. If it is, diff is updated to this new maximum difference.


# Complexity
- Time complexity: O(N)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# PYTHON 3
```
class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        minn = 1e9
        diff = -1
        for i in nums:
            if i <= minn:
                minn = i
            else:
                diff = max(diff,i-minn)
        return diff
```

# JAVA
```
class Solution {
    public int maximumDifference(int[] nums) {
        int minn = Integer.MAX_VALUE;
        int diff = -1;
        for (int i : nums) {
            if (i <= minn) {
                minn = i;
            } else {
                diff = Math.max(diff, i - minn);
            }
        }
        return diff;
    }
}
```

# CPP
```
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minn = 1e9;
        int diff = -1;
        for (int i : nums) {
            if (i <= minn) {
                minn = i;
            } else {
                diff = max(diff, i - minn);
            }
        }
        return diff;
    }
};


</details>
