# Maximum Gap

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | November 4, 2026 |
| **Tags** | Array, Sorting, Bucket Sort, Radix Sort, Pigeonhole Principle |
| **Link** | [View Problem](https://leetcode.com/problems/maximum-gap/) |
| **Runtime** | 49 ms |
| **Memory** | 85.6 MB |

## Problem Description

<p>Given an integer array <code>nums</code>, return <em>the maximum difference between two successive elements in its sorted form</em>. If the array contains less than two elements, return <code>0</code>.</p>

<p>You must write an algorithm that runs in linear time and uses linear extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,6,9,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [10]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The array contains less than 2 elements, therefore return 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ solution, using bucket to record!
**Author**: [@lchen77](https://leetcode.com/lchen77/)
**Upvotes**: 9 👍
**Link**: [View Original Post](https://leetcode.com/problems/maximum-gap/solutions/50698/)

---

    int maximumGap(vector<int>& nums) {
        const int size_num = nums.size();
        if (size_num < 2) return 0;
        int maxV = *max_element(nums.begin(), nums.end());
        int minV = *min_element(nums.begin(), nums.end());
        if (maxV == minV) return 0;
        double range = (maxV - minV) / double(size_num - 1);
        vector<int> max_b(size_num, INT_MIN), min_b(size_num, INT_MAX);
        for (int i = 0; i < size_num; i++) {
            int index = (nums[i] - minV) / range;
            max_b[index] = max(max_b[index], nums[i]);
            min_b[index] = min(min_b[index], nums[i]);
        }
        int max_g = (int)range,  start = max_b[0];
        for (int i = 1; i < size_num; i++) {
            if (min_b[i] == INT_MAX) continue;
            max_g = max(max_g, min_b[i] - start);
            start = max_b[i];
        }
        return max_g;
    }

</details>
