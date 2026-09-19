# Happy Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 19, 2026 |
| **Tags** | Hash Table, Math, Two Pointers, Floyd's Cycle Finding Algorithm |
| **Link** | [View Problem](https://leetcode.com/problems/happy-number/) |
| **Runtime** | 0 ms |
| **Memory** | 8.5 MB |

## Problem Description

<p>Write an algorithm to determine if a number <code>n</code> is happy.</p>

<p>A <strong>happy number</strong> is a number defined by the following process:</p>

<ul>
	<li>Starting with any positive integer, replace the number by the sum of the squares of its digits.</li>
	<li>Repeat the process until the number equals 1 (where it will stay), or it <strong>loops endlessly in a cycle</strong> which does not include 1.</li>
	<li>Those numbers for which this process <strong>ends in 1</strong> are happy.</li>
</ul>

<p>Return <code>true</code> <em>if</em> <code>n</code> <em>is a happy number, and</em> <code>false</code> <em>if not</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 19
<strong>Output:</strong> true
<strong>Explanation:</strong>
1<sup>2</sup> + 9<sup>2</sup> = 82
8<sup>2</sup> + 2<sup>2</sup> = 68
6<sup>2</sup> + 8<sup>2</sup> = 100
1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅☑️ Best C++ 2 Solution || Floyd's Cycle-Finding Algorithm || Hash Table || One Stop Solution.
**Author**: [@its_vishal_7575](https://leetcode.com/its_vishal_7575/)
**Upvotes**: 278 👍
**Link**: [View Original Post](https://leetcode.com/problems/happy-number/solutions/3236759/)

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We can solve this question using Multiple Approaches. (Here I have explained all the possible solutions of this problem).

1. Solved using Math + Hash Table..
2. Solved using Floyd\'s Cycle-Finding Algorithm.

# Approach
<!-- Describe your approach to solving the problem. -->
We can easily understand the all the approaches by seeing the code which is easy to understand with comments.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Time complexity is given in code comment.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Space complexity is given in code comment.

# Code
```
/*

    Time Complexity : O(logN) where N is the number.

    Space Complexity : O(logN), Hash Table(unordered_set(set)) space.

    Solved using Math + Hash Table.

*/


/***************************************** Approach 1 *****************************************/

class Solution {
private:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = nextNumber(n);
        }
        return n==1;
    }
};






/*

    Time Complexity : O(logN) where N is the number.

    Space Complexity : O(1), Constant space.

    Solved using Floyd\'s Cycle-Finding Algorithm.

*/


/***************************************** Approach 2 *****************************************/

class Solution {
private:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
public:
    bool isHappy(int n) {
        int slowPointer = n;
        int fastPointer = nextNumber(n);
        while(fastPointer != 1 && fastPointer != slowPointer){
            slowPointer = nextNumber(slowPointer);
            fastPointer = nextNumber(nextNumber(fastPointer));
        }
        return fastPointer==1;
    }
};

```

***IF YOU LIKE THE SOLUTION THEN PLEASE UPVOTE MY SOLUTION BECAUSE IT GIVES ME MOTIVATION TO REGULARLY POST THE SOLUTION.***

![WhatsApp Image 2023-02-10 at 19.01.02.jpeg](https://assets.leetcode.com/users/images/0a95fea4-64f4-4502-82aa-41db6d77c05c_1676054939.8270252.jpeg)

</details>
