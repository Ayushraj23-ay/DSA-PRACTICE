# Swapping Nodes in a Linked List

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 20, 2026 |
| **Tags** | Linked List, Two Pointers |
| **Link** | [View Problem](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/) |
| **Runtime** | 9 ms |
| **Memory** | 194.9 MB |

## Problem Description

<p>You are given the <code>head</code> of a linked list, and an integer <code>k</code>.</p>

<p>Return <em>the head of the linked list after <strong>swapping</strong> the values of the </em><code>k<sup>th</sup></code> <em>node from the beginning and the </em><code>k<sup>th</sup></code> <em>node from the end (the list is <strong>1-indexed</strong>).</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/linked1.jpg" style="width: 400px; height: 112px;">
<pre><strong>Input:</strong> head = [1,2,3,4,5], k = 2
<strong>Output:</strong> [1,4,3,2,5]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> head = [7,9,6,6,7,8,3,0,9,5], k = 5
<strong>Output:</strong> [7,9,6,6,8,7,3,0,9,5]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is <code>n</code>.</li>
	<li><code>1 &lt;= k &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= Node.val &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ 🔥 One-Pass 🔥 Easy and Explained approach 🔥
**Author**: [@ribhav_32](https://leetcode.com/ribhav_32/)
**Upvotes**: 196 👍
**Link**: [View Original Post](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/solutions/3525152/)

---

# **PLEASE UPVOTE\uD83D\uDC4D**
# Approach
- ##### To solve this problem in one pass, we can use a two-pointer approach.
- ##### First, we can initialize two pointers, left_ptr and right_ptr, both pointing to the head of the linked list. We can then move the right_ptr k-2 steps forward.

- ##### After this, we can move both left_ptr and right_ptr forward simultaneously until right_ptr reaches the end of the list.
- ##### At this point, left_ptr will be pointing to the kth node from the beginning, and end_ptr will be pointing to the kth node from the end.

- ##### We can then swap the values of these two nodes, and return the head of the linked list.

# Complexity
- Time complexity: O(N)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# **PLEASE UPVOTE\uD83D\uDC4D**
# Code
```
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left_ptr = head, *right_ptr = head;
        for (int i = 0; i < k-1; i++) {
            right_ptr = right_ptr->next;
        }
        
        ListNode *end_ptr = right_ptr;
        while (right_ptr->next) {
            left_ptr = left_ptr->next;
            right_ptr = right_ptr->next;
        }
        
        swap(end_ptr->val, left_ptr->val);
        
        return head;
    }
};
```
![e2515d84-99cf-4499-80fb-fe458e1bbae2_1678932606.8004954.png](https://assets.leetcode.com/users/images/593c0559-644c-43cf-95fc-b18138253456_1684110070.1871367.png)

</details>
