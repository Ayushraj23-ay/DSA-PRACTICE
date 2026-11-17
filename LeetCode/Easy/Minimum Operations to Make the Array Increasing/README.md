# Minimum Operations to Make the Array Increasing

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 17, 2026 |
| **Tags** | Array, Greedy |
| **Link** | [View Problem](https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/) |
| **Runtime** | 271 ms |
| **Memory** | 19.8 MB |

## Problem Description

<p>You are given an integer array <code>nums</code> (<strong>0-indexed</strong>). In one operation, you can choose an element of the array and increment it by <code>1</code>.</p>

<ul>
	<li>For example, if <code>nums = [1,2,3]</code>, you can choose to increment <code>nums[1]</code> to make <code>nums = [1,<u><b>3</b></u>,3]</code>.</li>
</ul>

<p>Return <em>the <strong>minimum</strong> number of operations needed to make</em> <code>nums</code> <em><strong>strictly</strong> <strong>increasing</strong>.</em></p>

<p>An array <code>nums</code> is <strong>strictly increasing</strong> if <code>nums[i] &lt; nums[i+1]</code> for all <code>0 &lt;= i &lt; nums.length - 1</code>. An array of length <code>1</code> is trivially strictly increasing.</p>

<p>&nbsp;</p>
<p><span class="float-right -my-0.5 ml-2 inline-flex select-none items-center" data-example-lang-controls=""><span role="group" class="inline-flex h-6 items-center rounded-sd-md bg-sd-muted p-0.5" data-example-lang-toggle=""><button type="button" aria-pressed="true" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-sd-border bg-sd-background text-sd-foreground" fdprocessedid="at2ur">Original</button><button type="button" aria-pressed="false" class="h-5 max-w-[10rem] truncate whitespace-nowrap rounded-sd-sm border px-2 text-xs font-normal leading-none border-transparent text-sd-muted-foreground hover:text-sd-foreground" fdprocessedid="9nssxt">C++</button></span></span><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You can do the following operations:
1) Increment nums[2], so nums becomes [1,1,<u><strong>2</strong></u>].
2) Increment nums[1], so nums becomes [1,<u><strong>2</strong></u>,2].
3) Increment nums[2], so nums becomes [1,2,<u><strong>3</strong></u>].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,5,2,4,1]
<strong>Output:</strong> 14
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [8]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy C++ Solution
**Author**: [@Anshika_28](https://leetcode.com/Anshika_28/)
**Upvotes**: 44 👍
**Link**: [View Original Post](https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/solutions/1187305/)

---

**Do upvote if useful!**
```
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int output=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                continue;
            else{
                output=output+(nums[i]+1-nums[i+1]);
                nums[i+1]=nums[i]+1;
            }
        }
        return output;
    }
};
```

</details>
