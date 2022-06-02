# 34. 在排序数组中查找元素的第一个和最后一个位置

## 题目描述

给一个升序数列nums，找出给定目标值target的开始和结束位置。

## 解题方法

二分搜索，对于左端点，如果二分点的值大于等于目标值，那么就让r=mid，否则l=mid+1。对于左端点，如果二分点的值小于等于目标值，那么就让l=mid，否则让r=mid-1。时间复杂度为O(logn)，空间复杂度为O(n)，其中n为数列的大小。

## 源代码

[源代码](../src/34-find-first-and-last-position-of-element-in-sorted-array.cpp)
