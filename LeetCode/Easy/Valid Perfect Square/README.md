# Valid Perfect Square

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 11, 2026 |
| **Tags** | Math, Binary Search |
| **Link** | [View Problem](https://leetcode.com/problems/valid-perfect-square/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>Given a positive integer num, return <code>true</code> <em>if</em> <code>num</code> <em>is a perfect square or</em> <code>false</code> <em>otherwise</em>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer. In other words, it is the product of some integer with itself.</p>

<p>You must not use any built-in library function, such as <code>sqrt</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> num = 16
<strong>Output:</strong> true
<strong>Explanation:</strong> We return true because 4 * 4 = 16 and 4 is an integer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> num = 14
<strong>Output:</strong> false
<strong>Explanation:</strong> We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Unique solution, Easy to understand. C++
**Author**: [@Metacresol](https://leetcode.com/Metacresol/)
**Upvotes**: 153 👍
**Link**: [View Original Post](https://leetcode.com/problems/valid-perfect-square/solutions/622060/)

---

This solution makes use of the fact that all square numbers are sum of odd numbers starting from 1.
For ex :
1 = 1
1+3 = 4
1 + 3 + 5 = 9
1 + 3 + 5 + 7 = 16
.... and so on
So i keep subtracting odd numbers from the given number, starting from 1. If the number eventually reaches 0, it is a perfect square. If it reaches a negative number without reaching 0 it is not a perfect square.
So the code goes like :
```
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num -= i;      //Subtracting odd number from num and updating num
            i +=2;         // Updating i to the next odd number
            if(!num) return true;
        }
        return false;
    }
};
```

</details>
