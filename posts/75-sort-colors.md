# 75. 颜色分类

## 题目描述

给一个由0、1、2组成的数组nums，在不使用sort的情况下排序。

## 解题方法

遍历nums，用3个变量记录0、1、2的个数，最后按顺序排列。时间复杂度为O(n)，空间复杂度为O(n)，其中n表示nums的大小。

## 源代码

[源代码](../src/75-sort-colors.cpp)