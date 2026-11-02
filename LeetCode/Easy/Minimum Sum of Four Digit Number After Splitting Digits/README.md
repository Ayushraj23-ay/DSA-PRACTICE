# Minimum Sum of Four Digit Number After Splitting Digits

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | November 2, 2026 |
| **Tags** | Math, Greedy, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/) |
| **Runtime** | 0 ms |
| **Memory** | 7.9 MB |

## Problem Description

<p>You are given a <strong>positive</strong> integer <code>num</code> consisting of exactly four digits. Split <code>num</code> into two new integers <code>new1</code> and <code>new2</code> by using the <strong>digits</strong> found in <code>num</code>. <strong>Leading zeros</strong> are allowed in <code>new1</code> and <code>new2</code>, and <strong>all</strong> the digits found in <code>num</code> must be used.</p>

<ul>
	<li>For example, given <code>num = 2932</code>, you have the following digits: two <code>2</code>'s, one <code>9</code> and one <code>3</code>. Some of the possible pairs <code>[new1, new2]</code> are <code>[22, 93]</code>, <code>[23, 92]</code>, <code>[223, 9]</code> and <code>[2, 329]</code>.</li>
</ul>

<p>Return <em>the <strong>minimum</strong> possible sum of </em><code>new1</code><em> and </em><code>new2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> num = 2932
<strong>Output:</strong> 52
<strong>Explanation:</strong> Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.
The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> num = 4009
<strong>Output:</strong> 13
<strong>Explanation:</strong> Some possible pairs [new1, new2] are [0, 49], [490, 0], etc. 
The minimum sum can be obtained by the pair [4, 9]: 4 + 9 = 13.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1000 &lt;= num &lt;= 9999</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [C++/java/C#] Two plus Two sorted || Straight forward Solutions
**Author**: [@nitishhsinghhh](https://leetcode.com/nitishhsinghhh/)
**Upvotes**: 21 👍
**Link**: [View Original Post](https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/solutions/2066048/)

---

# Solution

A 2/2 split produce small sums than 1/3 splits. The idea is to sort the digits in an order and then consume (1, 3) and (2, 4) combination and return their result.
```cpp []
// Solution 1
class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        while (num > 0) {
            temp.push_back(num % 10);
            num = num / 10;
        }
        sort(temp.begin(), temp.end());
        return temp[0] * 10 + temp[2] + temp[1] * 10 + temp[3];
    }
};
// Solution 2
class Solution {
public:
    int minimumSum(int num) {
        vector<int> dig;
        int cur = 0;
        while (num > 0) {
            dig.push_back(num % 10);
            num /= 10;
        }
        sort(dig.begin(), dig.end());
        int num1 = dig[0] * 10 + dig[2];
        int num2 = dig[1] * 10 + dig[3];
        return num1 + num2;
    }
};
```
```java []
class Solution {
    public int minimumSum(int num) {
        int[] dig = new int[4];
        int cur = 0;
        while (num > 0) {
            dig[cur++] = num % 10;
            num /= 10;
        }
        Arrays.sort(dig);
        int num1 = dig[0] * 10 + dig[2];
        int num2 = dig[1] * 10 + dig[3];
        return num1 + num2;
    }
}
```
```csharp []
// Solution 1
public class Solution {
    public int MinimumSum(int num) {
        char[] minimumArray = num.ToString().ToCharArray();
        Array.Sort(minimumArray);
        return ((minimumArray[0] - \'0\') * 10 + (minimumArray[2] - \'0\'))
                + ((minimumArray[1] - \'0\') * 10 + (minimumArray[3] - \'0\'));
    }
}

// Solution 2
// Collect the digits then sort the array
public class Solution {
    public int MinimumSum(int num) {
        int[] dig = new int[4];
        int cur = 0;
        while (num > 0) {
            dig[cur++] = num % 10;
            num /= 10;
        }
        Array.Sort(dig);
        return dig[0] * 10 + dig[2] + dig[1] * 10 + dig[3];
    }
}
```

# Frequently encountered in technical interviews
```
std::vector<std::pair<std::string, int>> interview_frequency = {{"Amazon", 1}};
```

</details>
