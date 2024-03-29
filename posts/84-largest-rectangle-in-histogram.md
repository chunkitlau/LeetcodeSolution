# 84. 柱状图中最大的矩形

## 题目描述

给n个非负整数表示宽度1的彼此相邻的柱子高度，求柱状图能够勾勒出的矩形最大面积。

## 解题方法

从前往后使用栈维护一个不递减的序列，如果新加入的柱子k高度x比栈顶y要矮，可以发现高度高于x的矩形不会跨过k。而我们知道对于栈里面的相邻的矩形a，b之间的矩形高度都不会低于这两个矩形（不然这两个矩形会被退栈），所以a之后k之前的矩形高度都不会小于b的高度，计算出面积然后求所有的最大值即可。时间复杂度为O(n)，空间复杂度为O(n)。

## 源代码

[源代码](../src/84-largest-rectangle-in-histogram.cpp)
