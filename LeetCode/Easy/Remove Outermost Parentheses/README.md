# Remove Outermost Parentheses

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 8, 2026 |
| **Tags** | String, Stack, Bracket Sequences |
| **Link** | [View Problem](https://leetcode.com/problems/remove-outermost-parentheses/) |
| **Runtime** | 23 ms |
| **Memory** | 67.4 MB |

## Problem Description

<p>A valid parentheses string is either empty <code>""</code>, <code>"(" + A + ")"</code>, or <code>A + B</code>, where <code>A</code> and <code>B</code> are valid parentheses strings, and <code>+</code> represents string concatenation.</p>

<ul>
	<li>For example, <code>""</code>, <code>"()"</code>, <code>"(())()"</code>, and <code>"(()(()))"</code> are all valid parentheses strings.</li>
</ul>

<p>A valid parentheses string <code>s</code> is primitive if it is nonempty, and there does not exist a way to split it into <code>s = A + B</code>, with <code>A</code> and <code>B</code> nonempty valid parentheses strings.</p>

<p>Given a valid parentheses string <code>s</code>, consider its primitive decomposition: <code>s = P<sub>1</sub> + P<sub>2</sub> + ... + P<sub>k</sub></code>, where <code>P<sub>i</sub></code> are primitive valid parentheses strings.</p>

<p>Return <code>s</code> <em>after removing the outermost parentheses of every primitive string in the primitive decomposition of </em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "(()())(())"
<strong>Output:</strong> "()()()"
<strong>Explanation:</strong> 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "(()())(())(()(()))"
<strong>Output:</strong> "()()()()(())"
<strong>Explanation:</strong> 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "()()"
<strong>Output:</strong> ""
<strong>Explanation:</strong> 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s[i]</code> is either <code>'('</code> or <code>')'</code>.</li>
	<li><code>s</code> is a valid parentheses string.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Solution
**Author**: [@deleted_user](https://leetcode.com/deleted_user/)
**Upvotes**: 493 👍
**Link**: [View Original Post](https://leetcode.com/problems/remove-outermost-parentheses/solutions/3551123/)

---

```C++ []
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == \'(\' && opened++ > 0) res += c;
            if (c == \')\' && opened-- > 1) res += c;
        }
        return res;
    }
};
```

```Python3 []
class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        res, opened = [], 0
        for c in S:
            if c == \'(\' and opened > 0: res.append(c)
            if c == \')\' and opened > 1: res.append(c)
            opened += 1 if c == \'(\' else -1
        
        return "".join(res)
```

```Java []
class Solution {
    public String removeOuterParentheses(String s) {
        int len = s.length();
        if (len <= 2) return "";
        char[] c = s.toCharArray();
        StringBuilder newString = new StringBuilder();
        int open = 1;
        int openLeft = 0;
        for (int i = 1; i < len; i++) {
            if (c[i] == \'(\') {
                open++;
                if (open > 1) newString.append(\'(\');
            }
            else {
                if (open > 1) newString.append(\')\');
                open--;
            }
        }
        return newString.toString();
    }
}
```

</details>
