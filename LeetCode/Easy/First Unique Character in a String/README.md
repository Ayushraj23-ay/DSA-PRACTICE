# First Unique Character in a String

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 19, 2026 |
| **Tags** | Hash Table, String, Queue, Counting |
| **Link** | [View Problem](https://leetcode.com/problems/first-unique-character-in-a-string/) |
| **Runtime** | 7 ms |
| **Memory** | 14.9 MB |

## Problem Description

<p>Given a string <code>s</code>, find the <strong>first</strong> non-repeating character in it and return its index. If it <strong>does not</strong> exist, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "leetcode"</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>The character <code>'l'</code> at index 0 is the first character that does not occur at any other index.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "loveleetcode"</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "aabb"</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅☑Beats 99% || [C++/Java/Python/JavaScript] || 2 Line Code || EXPLAINED🔥
**Author**: [@MarkSPhilip31](https://leetcode.com/MarkSPhilip31/)
**Upvotes**: 91 👍
**Link**: [View Original Post](https://leetcode.com/problems/first-unique-character-in-a-string/solutions/4678579/)

---

# PLEASE UPVOTE IF IT HELPED

---

![Screenshot 2024-02-03 053220.png](https://assets.leetcode.com/users/images/42365587-9251-4034-b2b2-48d70f799a37_1707095168.9245899.png)

---

# Approaches
(Also explained in the code)

1. Initialize an unordered map (mp) to store character counts.
1. Iterate through the string to update character counts in the map.
1. Iterate through the string again, return the index of the first character with a count of 1.




# Complexity
- Time complexity:
   $$O(n)$$
    

- Space complexity:
   $$O(U)$$
*(U is the number of unique characters in the string.)*
    


# Code
```C++ []

class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int> mp;

        for (auto a : s) mp[a]++;
        for (int i = 0; i < s.size(); i++)if(mp[s[i]] == 1)return i;

        return -1;
    }
}; 


```
```Java []


class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character, Integer> mp = new HashMap<>();

        for (char a : s.toCharArray()) {
            mp.put(a, mp.getOrDefault(a, 0) + 1);
        }

        for (int i = 0; i < s.length(); i++) {
            if (mp.get(s.charAt(i)) == 1) {
                return i;
            }
        }

        return -1;
    }
}



```
```python3 []
class Solution:
    def firstUniqChar(self, s: str) -> int:
        mp = {}

        for a in s:
            mp[a] = mp.get(a, 0) + 1

        for i in range(len(s)):
            if mp[s[i]] == 1:
                return i

        return -1



```
```javascript []

var firstUniqChar = function(s) {
    let mp = {};

    for (let a of s) {
        mp[a] = (mp[a] || 0) + 1;
    }

    for (let i = 0; i < s.length; i++) {
        if (mp[s[i]] === 1) {
            return i;
        }
    }

    return -1;
};


```
---



# PLEASE UPVOTE IF IT HELPED

---
---


---

</details>
