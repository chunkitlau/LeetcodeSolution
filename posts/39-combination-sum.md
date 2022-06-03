# 39. 组合总和

## 题目描述

给一个无重复数列candidates，找出和为目标值target的所有不同组合。

## 解题方法

先对数列从小到大排序，使用dfs枚举每个元素选择多少个，同时如果和不为target且差值小于当前元素则提前终止搜索。时间复杂度为O(k^n)，空间复杂度为O(n)，其中n为数列的大小,k为大于2的常数。

## 源代码

[源代码](../src/39-combination-sum.cpp)