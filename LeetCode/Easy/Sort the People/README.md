# Sort the People

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 28, 2026 |
| **Tags** | Array, Hash Table, String, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/sort-the-people/) |
| **Runtime** | 189 ms |
| **Memory** | 23.8 MB |

## Problem Description

<p>You are given an array of strings <code>names</code>, and an array <code>heights</code> that consists of <strong>distinct</strong> positive integers. Both arrays are of length <code>n</code>.</p>

<p>For each index <code>i</code>, <code>names[i]</code> and <code>heights[i]</code> denote the name and height of the <code>i<sup>th</sup></code> person.</p>

<p>Return <code>names</code><em> sorted in <strong>descending</strong> order by the people's heights</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> names = ["Mary","John","Emma"], heights = [180,165,170]
<strong>Output:</strong> ["Mary","Emma","John"]
<strong>Explanation:</strong> Mary is the tallest, followed by Emma and John.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> names = ["Alice","Bob","Bob"], heights = [155,185,150]
<strong>Output:</strong> ["Bob","Alice","Bob"]
<strong>Explanation:</strong> The first Bob is the tallest, followed by Alice and the second Bob.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == names.length == heights.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>3</sup></code></li>
	<li><code>1 &lt;= names[i].length &lt;= 20</code></li>
	<li><code>1 &lt;= heights[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>names[i]</code> consists of lower and upper case English letters.</li>
	<li>All the values of <code>heights</code> are distinct.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ | 4 Solutions | Pairs | Comparator
**Author**: [@kiranpalsingh1806](https://leetcode.com/kiranpalsingh1806/)
**Upvotes**: 113 👍
**Link**: [View Original Post](https://leetcode.com/problems/sort-the-people/solutions/2620605/)

---

**1. With Vector of Pairs**
Just sort the pair vector in which we will store the height in first part of pair.

```cpp
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> A;
        int N = names.size();
        for(int i = 0; i < N; i++) {
            A.push_back({heights[i], names[i]});
        }

        sort(A.rbegin(), A.rend());

        vector<string> ans;
        for(int i = 0; i < N; i++) {
            ans.push_back(A[i].second);
        }
        return ans;
    }
```

**EDIT 1**
**Optimization** suggested by @dvisp - No need to create answer vector.
```cpp
for(int i = 0; i < N; i++) {
	names[i] = A[i].second;
}
return names;
```

**2. Using Custom Comparator**
Create separate vector and sort its index as per heights vector. Use those index to put names in answer. 

```cpp
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> idx(names.size());
        for (int i = 0; i < names.size(); ++i) {
            idx[i] = i;
        }
        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return heights[i] > heights[j];
        });
        vector<string> ans(names.size());
        for (int i = 0; i < names.size(); ++i) {
            ans[i] = names[idx[i]];
        }
        return ans;
    }
};
```

**3. Priority Queue**  ( Solution by @secretsuccess291)
```cpp
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        priority_queue<pair<int, string>> pq;
        
        for(int i = 0; i < heights.size(); i++){
            pq.push({heights[i], names[i]});
        }
        
        vector<string> ans;
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
}
```

**4. Map**
Solution suggested by @raunak_pandey
```cpp
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string>mp;
        vector<string>v;
        for(int i=0; i < size(names); i++)
            mp[heights[i]] = names[i];
        for (auto i = mp.rbegin(); i != mp.rend(); ++i) v.push_back(i->second);
        return v;
}
```

**Related Problems**
[Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)

</details>
