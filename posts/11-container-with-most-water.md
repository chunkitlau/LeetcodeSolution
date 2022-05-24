# 11. 盛最多水的容器

## 题目描述

给定一个整数数组h表示n条两个端点是(i,0)和(i,hight[i])的垂线，找出两条线使得min(hight[i],hight[j])*(j-i)最大。

## 解题方法

记录左指针l和右指针r，一开始l=0，r=n-1。每次用min(hight[l],hight[r])*(r-l)更新答案，如果hight[l]为较小值则l=l+1，否则r=r-1。证明：只考虑hight[l]为较小值的情况，此时r往左移不会得到更优的答案，因为hight没有变大反而r-l变小了，由归纳法可证算法正确。时间复杂度为O(n)，空间复杂度为O(n)。

## 源代码

[源代码](../src/11-container-with-most-water.cpp)
