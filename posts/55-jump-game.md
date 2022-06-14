# 55. 跳跃游戏

## 题目描述

给一个非负整数数组nums代表可以跳跃最大长度，一开始位于第一个下标，判断是否可以到达最后一个下标。

## 解题方法

设right表示目前可以到达的最右下表，从左到右遍历数组，更新right，如果right不能到达当前位置，则表示不可以到达最后一个下标。时间复杂度为O(n)，空间复杂度为O(n)，n代表nums的大小。

## 源代码

[源代码](../src/55-jump-game.cpp)