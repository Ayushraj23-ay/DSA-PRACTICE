# Convert Binary Number in a Linked List to Integer

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 25, 2026 |
| **Tags** | Linked List, Math |
| **Link** | [View Problem](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/) |
| **Runtime** | 0 ms |
| **Memory** | 10.6 MB |

## Problem Description

<p>Given <code>head</code> which is a reference node to a singly-linked list. The value of each node in the linked list is either <code>0</code> or <code>1</code>. The linked list holds the binary representation of a number.</p>

<p>Return the <em>decimal value</em> of the number in the linked list.</p>

<p>The <strong>most significant bit</strong> is at the head of the linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/05/graph-1.png" style="width: 426px; height: 108px;">
<pre><strong>Input:</strong> head = [1,0,1]
<strong>Output:</strong> 5
<strong>Explanation:</strong> (101) in base 2 = (5) in base 10
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> head = [0]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The Linked List is not empty.</li>
	<li>Number of nodes will not exceed <code>30</code>.</li>
	<li>Each node's value is either <code>0</code> or <code>1</code>.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [C++] Recursive vs. Iterative approach, both around 100% Time, 100% space
**Author**: [@Ajna](https://leetcode.com/Ajna/)
**Upvotes**: 36 👍
**Link**: [View Original Post](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/solutions/732045/)

---

I thought this was an excellent training ground to compare the 2 approaches: simple problem, so our hands are free from some complex bits of logic, little to write, pretty straightforward approach.

The recursive one was probably more fun, as it is often the case with straight one-liners; notice that in order for it to work we needed to modify the function signature, adding the accumulator variable `res`, defaulting it to `0` and returning it when `head` is `NULL` - ie: we are done:

```cpp
class Solution {
public:
    int getDecimalValue(ListNode* head, int res = 0) {
        return head ? getDecimalValue(head->next, res * 2 + head->val) : res;
    }
};
```

The iterative one is probably what your compiler would turn a tail recursive approach into anyway; IMHO is slightly less elegant once you expand the logic to work step-by-step, but it might also be more understandable for beginners: I moved the declaration of `res` from the signature of the function to its body, wrapped the whole advancing logic into a `while` loop and finally returned `res`:

```cpp
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while (head) {
            res = res * 2 + head->val;
            head = head->next;
        }
        return res;
    }
};
```

</details>
