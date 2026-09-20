# N-th Tribonacci Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 20, 2026 |
| **Tags** | Math, Dynamic Programming, Memoization |
| **Link** | [View Problem](https://leetcode.com/problems/n-th-tribonacci-number/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and T<sub>n+3</sub> = T<sub>n</sub> + T<sub>n+1</sub> + T<sub>n+2</sub> for n &gt;= 0.</p>

<p>Given <code>n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 25
<strong>Output:</strong> 1389537
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 37</code></li>
	<li>The answer is guaranteed to fit within a 32-bit integer, ie. <code>answer &lt;= 2^31 - 1</code>.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Day 30 || DP - Easiest Beginner Friendly Sol || O(n) time and O(n) space
**Author**: [@singhabhinash](https://leetcode.com/singhabhinash/)
**Upvotes**: 94 👍
**Link**: [View Original Post](https://leetcode.com/problems/n-th-tribonacci-number/solutions/3115577/)

---

# Intuition of this Problem:
T[n] = T[n-1] + T[n-2] + T[n-3]
<!-- Describe your first thoughts on how to solve this problem. -->
**NOTE - PLEASE READ APPROACH FIRST THEN SEE THE CODE. YOU WILL DEFINITELY UNDERSTAND THE CODE LINE BY LINE AFTER SEEING THE APPROACH.**

# Approach for this Problem:
1. Initialize a vector "Tribonacci" with n+1 elements
2. Check if n is 0, if true return 0
3. Check if n is 1, if true return 1
4. Check if n is 2, if true return 1
5. Set Tribonacci[0] = 0, Tribonacci[1] = 1, Tribonacci[2] = 1
6. Iterate from i = 3 to n+1
    - Set Tribonacci[i] = Tribonacci[i-1] + Tribonacci[i-2] + Tribonacci[i-3]
1. Return Tribonacci[n]
<!-- Describe your approach to solving the problem. -->

# Humble Request:
- If my solution is helpful to you then please **UPVOTE** my solution, your **UPVOTE** motivates me to post such kind of solution.
- Please let me know in comments if there is need to do any improvement in my approach, code....anything.
- **Let\'s connect on** https://www.linkedin.com/in/abhinash-singh-1b851b188

![57jfh9.jpg](https://assets.leetcode.com/users/images/c2826b72-fb1c-464c-9f95-d9e578abcaf3_1674104075.4732099.jpeg)

# Code:
```C++ []
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        vector<int> Tribonacci(n+1);
        Tribonacci[0] = 0;
        Tribonacci[1] = 1;
        Tribonacci[2] = 1;
        for(int i = 3; i < n+1; i++){
            Tribonacci[i] = Tribonacci[i-1] + Tribonacci[i-2] + Tribonacci[i-3];
        }
        return Tribonacci[n];
    }
};
```
```Java []
class Solution {
    public int tribonacci(int n) {
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        int[] Tribonacci = new int[n+1];
        Tribonacci[0] = 0;
        Tribonacci[1] = 1;
        Tribonacci[2] = 1;
        for(int i = 3; i < n+1; i++){
            Tribonacci[i] = Tribonacci[i-1] + Tribonacci[i-2] + Tribonacci[i-3];
        }
        return Tribonacci[n];
    }
}

```
```Python []
class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return 1
        if n == 2:
            return 1
        Tribonacci = [0] * (n + 1)
        Tribonacci[0] = 0
        Tribonacci[1] = 1
        Tribonacci[2] = 1
        for i in range(3, n + 1):
            Tribonacci[i] = Tribonacci[i-1] + Tribonacci[i-2] + Tribonacci[i-3]
        return Tribonacci[n]

```

# Time Complexity and Space Complexity:
- Time complexity: **O(n)** // where n is the number given
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: **O(n)** // using extra space vector
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

</details>
