# 79. 单词搜索

## 题目描述

给一个m*n的网格board和一个长为l的字符串word，判断字符串是否存在于网格中。

## 解题方法

枚举board的一个网格作为起始点，使用深度优先搜索向各个方向搜索，判断是否匹配，如果不可以匹配就放弃，最后如果可以完全匹配则表示存在，如果搜索完都没有完全匹配则表示不存在。时间复杂度为O(mn*3^l)，空间复杂度为O(mn)。

## 源代码

[源代码](../src/79-word-search.cpp)