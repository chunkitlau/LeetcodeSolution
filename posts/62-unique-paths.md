# 62. 不同路径

## 题目描述

一个机器人位于m*n网格的左上角，每次只能向下或者向右移动，到达右下角总共有多少条路径。

## 解题方法

设c[j][k]表示从左上角到(j,k)的路径数，c[j][k]=c[j-1][k]+c[j][k-1]。时间复杂度为O(mn)，空间复杂度为O(mn)。

## 源代码

[源代码](../src/62-unique-paths.cpp)
