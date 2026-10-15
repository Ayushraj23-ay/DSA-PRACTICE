# Build Array from Permutation

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 16, 2026 |
| **Tags** | Array, Simulation |
| **Link** | [View Problem](https://leetcode.com/problems/build-array-from-permutation/) |
| **Runtime** | 2 ms |
| **Memory** | 20.6 MB |

## Problem Description

<p>Given a <strong>zero-based permutation</strong> <code>nums</code> (<strong>0-indexed</strong>), build an array <code>ans</code> of the <strong>same length</strong> where <code>ans[i] = nums[nums[i]]</code> for each <code>0 &lt;= i &lt; nums.length</code> and return it.</p>

<p>A <strong>zero-based permutation</strong> <code>nums</code> is an array of <strong>distinct</strong> integers from <code>0</code> to <code>nums.length - 1</code> (<strong>inclusive</strong>).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [0,2,1,5,3,4]
<strong>Output:</strong> [0,1,2,4,5,3]<strong>
Explanation:</strong> The array ans is built as follows: 
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
    = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
    = [0,1,2,4,5,3]</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [5,0,1,2,3,4]
<strong>Output:</strong> [4,5,0,1,2,3]
<strong>Explanation:</strong> The array ans is built as follows:
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
    = [nums[5], nums[0], nums[1], nums[2], nums[3], nums[4]]
    = [4,5,0,1,2,3]</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums[i] &lt; nums.length</code></li>
	<li>The elements in <code>nums</code> are <strong>distinct</strong>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow-up:</strong> Can you solve it without using an extra space (i.e., <code>O(1)</code> memory)?</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy explanation for O(1) space complexity
**Author**: [@lakpro](https://leetcode.com/lakpro/)
**Upvotes**: 92 👍
**Link**: [View Original Post](https://leetcode.com/problems/build-array-from-permutation/solutions/1692310/)

---

**Explanation for O(1) space complexity**

*Lets first see generally what should be done.*

**1.**  We need to store 2 values in one place, so we will use math (quotient and remainder)
	   

**2.** Let, size of array = **n**
       original number = **a**
       final number = **b**
	   
**3.**  So we will store **a = a + n*b**

**4.**   On taking **a%n**, we will get **a**
      On doing **a/n**, we will get **b**
	  
**5.**  Here the **b** that we are using is actually an **a** and there is a chance that it might be an **a** that is updated (final number)
      To get **a** from **a**, we use **a%n**
       So, here it will be **b%n**
       
  **6.** Finally, our equation becomes **a=a +n(b%n)**
       
   **7.**  In the question **a=nums[i] and b=nums[nums[i]]**
   
  **8.** So finally, the equation becomes
       **nums[i] = nums[i] + n * (nums[nums[i]]%n)**

***
**Update 1 (Intuition):**
In the question, it\'s given that `nums[i]` is always less than the length of nums. So, we take a number bigger than our numbers in the array. Here, we took it to be **nums.length()**.
We are updating our number in such a way that on taking `nums[i] % n` will return the original number and `nums[i]/n` will give the new number. 
Since we are adding` n*(new number)` to our original number, then `nums[i] % n` will be the previous number because the remainder will be the same.
Ex: let `n=7`, `nums[i] = 3`, `new number = 5`.
So, initially, `nums[i] = original number % n` => `3%7 =3`
Now, lets update to get the new value. `nums[i] = nums[i] + n * new number` => `nums[i] = 3 + 7*5 = 38`
To get original number: `nums[i]%n` => `38%7 = 3`
To get the new number: `nums[i]/n` => `38/7 = 5`
***
**Update 2 (Summary):**	  
As we proceed through the loop, we are updating the value of `nums[i]`
In `b`, we are storing the value of `nums[nums[i]]` (the original value, not the updated one)
For example, **we updated nums[i] for i=0,1,2** and at 3, `let nums[3] =0` .
Here, we need to store two values, `a=nums[3]` and `b=nums[nums[3]] = nums[0]`
So, *we need to store the value of nums[0] in b* .
Currently, **the value of nums[0] is updated one** and we need to store the original value.
To get the `original value from nums[i]`, we do `nums[i] % n`, which we will store in b. (see point 4)
So, `nums[nums[3]] % n` = `nums[0] % n` = `original value of nums[0]`
(if we did not use %n here, then it would have given ( `nums[0] = nums[0] + n*(something)`) , coz it was updated by the loop for i=0 .  
 
***	   

*Here is the C++ solution for the same:*
	   
```
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            
            nums[i] = nums[i] + n * (nums[nums[i]]%n);
                
        }
        
        for(int i=0;i<n;++i){
            nums[i]/=n;
        }
        
        return nums;
    }
};
```



</details>
