# 15. 三数之和

## 题目描述

给一个包含数字2-9的字符串digits，找出所有在九键输入法中能表示的字母组合。

## 解题方法

使用深度优先搜索dfs枚举每个数字表示哪个字母，具体实现的时候使用switch-case处理不同数字的情况。时间复杂度为O(3^n)，空间复杂度为O(n)，其中n为digits的大小。

## 源代码

[源代码](../src/17-letter-combinations-of-a-phone-number.cpp)
