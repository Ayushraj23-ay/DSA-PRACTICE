# Factorial Trailing Zeroes

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | September 20, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/factorial-trailing-zeroes/) |
| **Runtime** | 0 ms |
| **Memory** | 8 MB |

## Problem Description

<p>Given an integer <code>n</code>, return <em>the number of trailing zeroes in </em><code>n!</code>.</p>

<p>Note that <code>n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> 0
<strong>Explanation:</strong> 3! = 6, no trailing zero.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> 1
<strong>Explanation:</strong> 5! = 120, one trailing zero.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 0
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you write a solution that works in logarithmic time complexity?</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 4-lines 4ms C++ Solution with Explanations
**Author**: [@jianchao-li](https://leetcode.com/jianchao-li/)
**Upvotes**: 100 👍
**Link**: [View Original Post](https://leetcode.com/problems/factorial-trailing-zeroes/solutions/52470/)

---

Well, to compute the number of trailing zeros, we need to first think clear about what will generate a trailing `0`? Obviously, a number multiplied by `10` will have a trailing `0` added to it. So we only need to find out how many `10`'s will appear in the expression of the factorial. Since `10 = 2 * 5` and there are a bunch more `2`'s (each even number will contribute at least one `2`), we only need to count the number of `5`'s.

Now let's see what numbers will contribute a `5`. Well, simply the multiples of `5`, like `5, 10, 15, 20, 25, 35, ...`. So is the result simply `n / 5`? Well, not that easy. Notice that some numbers may contribute more than one `5`, like `25 = 5 * 5`. Well, what numbers will contribute more than one `5`? Ok, you may notice that only multiples of the power of `5` will contribute more than one `5`. For example, multiples of `25` will contribute at least two `5`'s.

Well, how to count them all? If you try some examples, you may finally get the result, which is `n / 5 + n / 25 + n / 125 + ...`. The idea behind this expression is: all the multiples of `5` will contribute one `5`, the multiples of `25` will contribute one more `5` and the multiples of `125` will contribute another one more `5`... and so on. Now, we can write down the following code, which is pretty short.

    class Solution {
    public:
        int trailingZeroes(int n) { 
            int count = 0;
            for (long long i = 5; n / i; i *= 5)
                count += n / i;
            return count;
        }
    };

</details>
