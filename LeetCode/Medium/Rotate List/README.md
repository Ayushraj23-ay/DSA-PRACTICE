# Rotate List

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 15, 2026 |
| **Tags** | Linked List, Two Pointers |
| **Link** | [View Problem](https://leetcode.com/problems/rotate-list/) |
| **Runtime** | 0 ms |
| **Memory** | 16.3 MB |

## Problem Description

<p>Given the <code>head</code> of a linked&nbsp;list, rotate the list to the right by <code>k</code> places.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/rotate1.jpg" style="width: 450px; height: 191px;">
<pre><strong>Input:</strong> head = [1,2,3,4,5], k = 2
<strong>Output:</strong> [4,5,1,2,3]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/13/roate2.jpg" style="width: 305px; height: 350px;">
<pre><strong>Input:</strong> head = [0,1,2], k = 4
<strong>Output:</strong> [2,0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[0, 500]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
	<li><code>0 &lt;= k &lt;= 2 * 10<sup>9</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Simple & Clean C++ code with comments
**Author**: [@shlom](https://leetcode.com/shlom/)
**Upvotes**: 67 👍
**Link**: [View Original Post](https://leetcode.com/problems/rotate-list/solutions/883486/)

---

```cpp
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        auto iter = head;
        auto len = 1;
        while (iter->next != nullptr) {
            iter = iter->next; ++len;
        }
        // close the list (create a ring)
        iter->next = head;
        iter = head;
        // find one element before the new head
        for (int i = 0; i < len - (k % len) - 1; ++i) {
            iter = iter->next;
        }
        head = iter->next;
        // open the list (break the ring)
        iter->next = nullptr;
        return head;
    }
};
```

</details>
