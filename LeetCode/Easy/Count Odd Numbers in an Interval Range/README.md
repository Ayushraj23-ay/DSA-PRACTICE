# Count Odd Numbers in an Interval Range

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 19, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/) |
| **Runtime** | 1823 ms |
| **Memory** | 7.9 MB |

## Problem Description

<p>Given two non-negative integers <code>low</code> and <code><font face="monospace">high</font></code>. Return the <em>count of odd numbers between </em><code>low</code><em> and </em><code><font face="monospace">high</font></code><em>&nbsp;(inclusive)</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> low = 3, high = 7
<strong>Output:</strong> 3
<b>Explanation: </b>The odd numbers between 3 and 7 are [3,5,7].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> low = 8, high = 10
<strong>Output:</strong> 1
<b>Explanation: </b>The odd numbers between 8 and 10 are [9].</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= low &lt;= high&nbsp;&lt;= 10^9</code></li>
</ul>

##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅ [C++]|one line|BEATS 100% Runtime||Explanation✅
**Author**: [@vishnoi29](https://leetcode.com/vishnoi29/)
**Upvotes**: 199 👍
**Link**: [View Original Post](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/solutions/3178206/)

---

\uD83C\uDFA5\uD83D\uDD25 Exciting News! Join my Coding Journey! Subscribe Now! \uD83D\uDD25\uD83C\uDFA5

\uD83D\uDD17 Link in the leetcode profile 

New coding channel alert! \uD83D\uDE80\uD83D\uDCBB Subscribe to unlock amazing coding content and tutorials. Help me reach 1K subs to start posting more videos! Join now! \uD83C\uDF1F\uD83D\uDCAA

Thanks for your support! \uD83D\uDE4F\uD83C\uDF89

# Intuition
we will calculate all odd number from 1 to low-1 and 1 to high;
why low-1??
because we want include our low value.

# Approach
1. Total odd number between 1 and low - 1 is` low/2.`
2. Total odd number between 1 and high is `(high + 1 ) / 2`.
3. For getting answer we will  do
   `Total odd number between 1 and high`  - `Total odd number between 1 and low - 1`
      

# Complexity
- Time complexity:O(1)
- Space complexity:O(1)
![leetcode oms.jpg](https://assets.leetcode.com/users/images/ad4be479-5fd2-483c-9170-1fad6813c3cc_1676255592.8665023.jpeg)


# Code
```
class Solution {
public:
    int countOdds(int l, int h) {
        return ((h + 1) / 2) - (l / 2);
    }
};
```

If you really found my solution helpful **please upvote it** , as it motivates me to post such kind of codes.
*Let me know in comment if i can do better*.
Let\'s Connect on **[LINKDIN](https://www.linkedin.com/in/mahesh-vishnoi-a4a47a193/)**

![b0bf2fa1-1680-41fc-be3f-3ba1c8745505_1675216604.7695017.jpeg](https://assets.leetcode.com/users/images/42b90dac-a6e9-4f9d-99f5-d07a676b1819_1676256247.436845.jpeg)








</details>
