# Check if the Sentence Is Pangram

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 10, 2026 |
| **Tags** | Hash Table, String |
| **Link** | [View Problem](https://leetcode.com/problems/check-if-the-sentence-is-pangram/) |
| **Runtime** | 0 ms |
| **Memory** | 9.1 MB |

## Problem Description

<p>A <strong>pangram</strong> is a sentence where every letter of the English alphabet appears at least once.</p>

<p>Given a string <code>sentence</code> containing only lowercase English letters, return<em> </em><code>true</code><em> if </em><code>sentence</code><em> is a <strong>pangram</strong>, or </em><code>false</code><em> otherwise.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> sentence = "thequickbrownfoxjumpsoverthelazydog"
<strong>Output:</strong> true
<strong>Explanation:</strong> sentence contains at least one of every letter of the English alphabet.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> sentence = "leetcode"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence.length &lt;= 1000</code></li>
	<li><code>sentence</code> consists of lowercase English letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [ALL Languages]   ONLY 1 Line !
**Author**: [@ethanrao](https://leetcode.com/ethanrao/)
**Upvotes**: 39 👍
**Link**: [View Original Post](https://leetcode.com/problems/check-if-the-sentence-is-pangram/solutions/2711868/)

---


# Code
```cpp []
class Solution {
public:
    bool checkIfPangram(string sentence) {
        return unordered_set<char>(sentence.begin(), sentence.end()).size() == 26;
    }
};
```

```java []
class Solution {
    public boolean checkIfPangram(String sentence) {
        return sentence.chars().distinct().count() == 26;
    }
}


// Stream
class Solution {
    public boolean checkIfPangram(String sentence) {
        return sentence.chars().boxed().collect(Collectors.toSet()).size() == 26;
    }
}

```
```kotlin []
class Solution {
    fun checkIfPangram(sentence: String): Boolean {
        return sentence.toSet().count() == 26
    }
}
```


```python []
class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        return len(set(sentence)) == 26
```

```javascript []
var checkIfPangram = function (sentence) {
    return new Set(sentence).size === 26
};
```
```typescript []
function checkIfPangram(sentence: string): boolean {
    return [...new Set(sentence)].length >= 26;
};
```



</details>
