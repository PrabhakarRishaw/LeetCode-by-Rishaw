<h1 align="center">🚀 LeetCode by <span style="color:#0078ff">Rishaw</span></h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue.svg" alt="Language" />
  <img src="https://img.shields.io/github/repo-size/PrabhakarRishaw/LeetCode-by-Rishaw" alt="Repo size" />
  <img src="https://img.shields.io/github/last-commit/PrabhakarRishaw/LeetCode-by-Rishaw" alt="Last Commit" />
  <img src="https://img.shields.io/badge/Problems%20Solved-23%2F3716-green" alt="Progress" />
  <img src="https://img.shields.io/badge/Status-Active-brightgreen" alt="Active" />
</p>

---

### 🧾 Overview

Welcome to **LeetCode by Rishaw**, a comprehensive and structured collection of LeetCode problem solutions written in **Modern C++** (STL-based).  
This repository showcases my journey of mastering **Data Structures, Algorithms, and Problem-Solving Thinking** —  
a key step toward becoming a **Software Engineer** at top tech companies.

---

## 🟢 Easy
1. [TwoSum](https://leetcode.com/problems/two-sum/)
2. [PalindromeNumber](https://leetcode.com/problems/palindrome-number/)
3. ...

## 🟠 Medium
11. [ContainerWithMostWater](https://leetcode.com/problems/container-with-most-water/)
15. [3Sum](https://leetcode.com/problems/3sum/)
...

## 🔴 Hard
42. [TrappingRainWater](https://leetcode.com/problems/trapping-rain-water/)
...


Each file includes:
- ✅ Clean, optimized, and commented code  
- 🧮 Time & Space Complexity analysis  
- 🔗 Problem link for reference  

---

### 💡 Topics Covered

| Level | Core Concepts |
|--------|----------------|
| 🧩 **Fundamental** | Arrays, Strings, Two Pointers, HashMaps |
| 🧭 **Intermediate** | Binary Search, Recursion, Stack/Queue |
| ⚙️ **Advanced** | Dynamic Programming, Graphs, Backtracking, Greedy |
| 🧠 **Expert Zone** | Divide & Conquer, Tries, Optimization |

---

### 🎯 My DSA Goal (Oct 2025)

| Metric | Target |
|:--|:--|
| 🟢 Easy | 50 |
| 🟠 Medium | 30 |
| 🔴 Hard | 20 |
| 💪 Total | **100 Problems** |
| 📈 Goal | Crack Top-Tier Company Interviews |

> “Every problem solved adds one line to my success story.”

---
🧰 Tools & Technologies
Category	Tools
💻 Language	C++ (STL, OOPs)
🧩 Platform	LeetCode

🧠 IDE	VS Code, Code::Blocks
☁️ Version Control	Git, GitHub
🧑‍💻 Practice Tracker	LeetCode Stats, GitHub Contributions
👨‍💻 About Me

💬 “DSA is not about coding, it’s about thinking efficiently.”

Name: Rishaw
Degree: B.Tech (CSE)
Interests: DSA, OOPs, Problem Solving, Development
LeetCode: Rishaw076

GitHub: @PrabhakarRishaw

Location: India 🇮🇳


### 🧩 Sample Problem

**Problem:** [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)  
**Difficulty:** 🟠 Medium  
**Approach:** Two-Pointer Technique

```cpp
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, h * (right - left));
        (height[left] < height[right]) ? left++ : right--;
    }
    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum water: " << maxArea(height);
    return 0;
}
