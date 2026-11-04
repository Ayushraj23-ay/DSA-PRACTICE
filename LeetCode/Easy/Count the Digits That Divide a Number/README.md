# Count the Digits That Divide a Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 4, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/count-the-digits-that-divide-a-number/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>Given an integer <code>num</code>, return <em>the number of digits in <code>num</code> that divide </em><code>num</code>.</p>

<p>An integer <code>val</code> divides <code>nums</code> if <code>nums % val == 0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> num = 7
<strong>Output:</strong> 1
<strong>Explanation:</strong> 7 divides itself, hence the answer is 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> num = 121
<strong>Output:</strong> 2
<strong>Explanation:</strong> 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> num = 1248
<strong>Output:</strong> 4
<strong>Explanation:</strong> 1248 is divisible by all of its digits, hence the answer is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 10<sup>9</sup></code></li>
	<li><code>num</code> does not contain <code>0</code> as one of its digits.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ || JAVA || Python
**Author**: [@harsh_negi_07](https://leetcode.com/harsh_negi_07/)
**Upvotes**: 8 👍
**Link**: [View Original Post](https://leetcode.com/problems/count-the-digits-that-divide-a-number/solutions/2977297/)

---

**Brute Force**
**Check Divisibilty from each Digit of NUM**
Time Complexity -> O(log(num))
space Complexity -> O(1)

# C++
```
class Solution {
public:
    int countDigits(int num) {
        int n = num, ans = 0;
        while(num>0){
            ans += (n%(num%10)==0);
            num /= 10;
        }
        return ans;
    }
};
```
# Python
```
class Solution:
    def countDigits(self, num: int) -> int:
        n, res = num, 0
        while n>0:
            if num%(n%10)==0:
                res += 1
            n //= 10
        return res
```
# JAVA
```
class Solution {
    public int countDigits(int num) {
        int n = num, cnt = 0;
        while ( n > 0 ){
            int rem = n%10;
            n = n/10;
            if ( num % rem == 0 ) cnt++;
        }
        return cnt;
    }
}
```

</details>
