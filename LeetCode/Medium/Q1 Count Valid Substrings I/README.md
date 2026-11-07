# Q1. Count Valid Substrings I

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | November 7, 2026 |
| **Link** | [View Problem](https://leetcode.com/problems/count-valid-substrings-i/) |
| **Runtime** | 11 ms |
| **Memory** | 21.7 MB |

## Problem Description

<p>You are given a string <code>s</code> consisting only of the characters <code>'a'</code>, <code>'b'</code>, and <code>'c'</code>.</p>

<p>A string is called <strong>valid</strong> if it does not contain <code>"abc"</code> as a <strong>substring</strong>.</p>

<p>Return the number of <strong>valid substrings</strong> in <code>s</code>. Substrings with different starting or ending indices are counted separately.</p>

<p>A <strong>substring</strong> is a contiguous <b>non-empty</b> sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "abac"</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p>The following substrings don't contain <code>"abc"</code>​​​​​​​ as a substring:</p>

<ul>
	<li><code>s[0..0] = "a"</code></li>
	<li><code>s[0..1] = "ab"</code></li>
	<li><code>s[0..2] = "aba"</code></li>
	<li><code>s[0..3] = "abac"</code>​​​​​​​</li>
	<li><code>s[1..1] = "b"</code></li>
	<li><code>s[1..2] = "ba"</code></li>
	<li><code>s[1..3] = "bac"</code></li>
	<li><code>s[2..2] = "a"</code></li>
	<li><code>s[2..3] = "ac"</code></li>
	<li><code>s[3..3] = "c"</code></li>
</ul>

<p>Thus, the answer is 10.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "abc"</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<p>The following substrings don't contain <code>"abc"</code>​​​​​​​ as a substring:</p>

<ul>
	<li><code>s[0..0] = "a"</code></li>
	<li><code>s[0..1] = "ab"</code></li>
	<li><code>s[1..1] = "b"</code></li>
	<li><code>s[1..2] = "bc"</code></li>
	<li><code>s[2..2] = "c"</code>​​​​​​​</li>
</ul>

<p>Thus, the answer is 5.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "ac"</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>All substrings in <code>s</code> don't contain <code>"abc"</code> as a substring​​​​​​​. Thus, the answer is 3.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code>​​​​​​​</li>
	<li><code>s</code> only consists of <code>'a'</code>, <code>'b'</code>, and <code>'c'</code> characters.</li>
</ul>

