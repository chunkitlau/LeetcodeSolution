# 4. 寻找两个正序数组的中位数

## 题目描述

给定两个正序数组nums1、nums2，找出这两个数组的中位数。

## 解题方法

考虑将两个数组分别切分成两部分nums1l、nums1r、nums2l、nums2r，合并nums1l、nums2l成为前一半元素，元素数量x是总数的一半并且前一半最大值小于后一半。设第一个数组切分点可行区间为l、r，每次二分中点i，并且用x减i找到在第二个数组对应的切分点j，其中i和j及后面的数属于后一半元素。然后我们可以判断i-1对应的值是不是小于等于j，如果不是那么i就不是一个合法的切分点，令r=i-1，如果是则可以先记录当前结果，然后让l=i+1计算这个区间的答案。最后可以得到元素划分方法，由两部分的最大最小值可以得出答案。对较小数组二分，时间复杂度为O(n)。空间复杂度为O(n + m)。其中n为较小数组的大小，m为另一数组的大小。

## 源代码

[源代码](../src/4-median-of-two-sorted-arrays.cpp)
