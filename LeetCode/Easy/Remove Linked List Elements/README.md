# Remove Linked List Elements

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 19, 2026 |
| **Tags** | Linked List, Recursion |
| **Link** | [View Problem](https://leetcode.com/problems/remove-linked-list-elements/) |
| **Runtime** | 0 ms |
| **Memory** | 19.9 MB |

## Problem Description

<p>Given the <code>head</code> of a linked list and an integer <code>val</code>, remove all the nodes of the linked list that has <code>Node.val == val</code>, and return <em>the new head</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/06/removelinked-list.jpg" style="width: 500px; height: 142px;">
<pre><strong>Input:</strong> head = [1,2,6,3,4,5,6], val = 6
<strong>Output:</strong> [1,2,3,4,5]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> head = [], val = 1
<strong>Output:</strong> []
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> head = [7,7,7,7], val = 7
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 50</code></li>
	<li><code>0 &lt;= val &lt;= 50</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ [2 solutions: With single pointer + With double pointers] (Easy to understand)
**Author**: [@not_a_cp_coder](https://leetcode.com/not_a_cp_coder/)
**Upvotes**: 256 👍
**Link**: [View Original Post](https://leetcode.com/problems/remove-linked-list-elements/solutions/722528/)

---

```
class Solution {
public:
    /*
		Approach: 1
        Solving the problem using two pointers: previous and current.
        Time: 28 ms
	 */
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            if(curr->val==val){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;        
            }
        }
        return head;
    }
    
    /*
		Approach: 2
        Solving the problem using a single pointer: current.
        Time: 20 ms
    */
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
		// This is for the case when a linked list is like this: 
		// 1->1->2->null , val = 1
		// 1->1->1->null , val = 1
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* curr = head;
        while(curr!=nullptr  && curr->next!=nullptr){
            if(curr->next->val==val){
                curr->next = curr->next->next;
				// After doing the above step, I am not updating "curr" because of these type of test cases:
				// 1->2->3->6->6->6->5->null  val = 6
            }
            else
                curr = curr->next;
        }
        return head;
    }
};

```
Feel free to ask any doubts in the **comment** section.
If you like this solution, do **UPVOTE**.
Happy Coding :)

</details>
