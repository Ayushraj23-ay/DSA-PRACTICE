# Find the Distance Value Between Two Arrays

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 20, 2026 |
| **Tags** | Array, Two Pointers, Binary Search, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/) |
| **Runtime** | 12 ms |
| **Memory** | 16.7 MB |

## Problem Description

<p>Given two integer arrays <code>arr1</code> and <code>arr2</code>, and the integer <code>d</code>, <em>return the distance value between the two arrays</em>.</p>

<p>The distance value is defined as the number of elements <code>arr1[i]</code> such that there is not any element <code>arr2[j]</code> where <code>|arr1[i]-arr2[j]| &lt;= d</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
For arr1[0]=4 we have: 
|4-10|=6 &gt; d=2 
|4-9|=5 &gt; d=2 
|4-1|=3 &gt; d=2 
|4-8|=4 &gt; d=2 
For arr1[1]=5 we have: 
|5-10|=5 &gt; d=2 
|5-9|=4 &gt; d=2 
|5-1|=4 &gt; d=2 
|5-8|=3 &gt; d=2
For arr1[2]=8 we have:
<strong>|8-10|=2 &lt;= d=2</strong>
<strong>|8-9|=1 &lt;= d=2</strong>
|8-1|=7 &gt; d=2
<strong>|8-8|=0 &lt;= d=2</strong>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr1.length, arr2.length &lt;= 500</code></li>
	<li><code>-1000 &lt;= arr1[i], arr2[j] &lt;= 1000</code></li>
	<li><code>0 &lt;= d &lt;= 100</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Runtime: 0 ms, faster than 100.00% of ✅ C++ || Binary Search || Easy Simple Approach
**Author**: [@himanshuyadavroxx](https://leetcode.com/himanshuyadavroxx/)
**Upvotes**: 19 👍
**Link**: [View Original Post](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/solutions/1916796/)

---

***UPVOTE if you find it usefull and feel free to ask any doubt, thank you.***
```cpp
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size();
        int n = arr2.size();
        sort(arr2.begin(), arr2.end());
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            int l = 0, r = n-1, x = arr1[i] - d, y = arr1[i] + d;
            
            while (l <= r) {
                int mid = l+ (r-l)/2;
                if (arr2[mid] < x) {
                    l = mid + 1;
                } 
                else if (arr2[mid] > y) {
                    r = mid - 1;
                } 
                else {
                    cnt++; break;
                }
            }
        }
        return m - cnt;
    }
};
```

</details>
