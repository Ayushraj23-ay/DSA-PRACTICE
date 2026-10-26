# Maximum Product of Three Numbers

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 27, 2026 |
| **Tags** | Array, Math, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/maximum-product-of-three-numbers/) |
| **Runtime** | 12 ms |
| **Memory** | 31.4 MB |

## Problem Description

<p>You are given an integer array <code>nums</code>.</p>

<p>Find three numbers whose product is <strong>maximum</strong> and return the <strong>maximum</strong> product.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,-3]</span></p>

<p><strong>Output:</strong> <span class="example-io">-6</span></p>

<p><strong>Explanation:</strong></p>

<p>The only three numbers are 1, 2, and -3, so the maximum product is <code>1 * 2 * -3 = -6</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">24</span></p>

<p><strong>Explanation:</strong></p>

<p>The largest product comes from the three greatest numbers: <code>2 * 3 * 4 = 24</code>.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [-1,-2,-3]</span></p>

<p><strong>Output:</strong> <span class="example-io">-6</span></p>

<p><strong>Explanation:</strong></p>

<p>The only three numbers are -1, -2, and -3, so the maximum product is <code>(-1) * (-2) * (-3) = -6</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= nums.length &lt;=&nbsp;10<sup>4</sup></code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [C++] Two Solutions
**Author**: [@pankajgupta20](https://leetcode.com/pankajgupta20/)
**Upvotes**: 53 👍
**Link**: [View Original Post](https://leetcode.com/problems/maximum-product-of-three-numbers/solutions/1206272/)

---

##### Sorting Solution
	class Solution {
	public:
		int maximumProduct(vector<int>& nums) {
			int n = nums.size();
			sort(nums.begin(), nums.end());
			return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
		}
	};
##### Without Sorting Solution
	class Solution {
	public:
		int maximumProduct(vector<int>& nums) {
			int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
			int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
			for(int i = 0; i < nums.size(); i++){
				if(nums[i] <= min1){
					min2 = min1;
					min1 = nums[i];
				} 
				else if(nums[i] <= min2){
					min2 = nums[i];
				}
				if(nums[i] >= max1){ 
					max3 = max2;
					max2 = max1;
					max1 = nums[i];
				} 
				else if(nums[i] >= max2){
					max3 = max2;
					max2 = nums[i];
				} 
				else if(nums[i] >= max3){
					max3 = nums[i];
				}
			}
			return max(min1 * min2 * max1, max1 * max2 * max3);
		}
	};

</details>
