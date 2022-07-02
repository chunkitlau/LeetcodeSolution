# 96. 不同的二叉搜索树

## 题目描述

给n个节点，给出有多少种不同的二叉树。

## 解题方法

设f[k]表示k个节点有多少种不同的二叉树，可以枚举左子树有j个节点f[j]种情况，那么这时候右子树有k-j-1个节点，这种情况有f[j]*f[k-j-1]种情况，将所有情况加起来即可。时间复杂度为O(n^2)，空间复杂度为O(n^2)。

## 源代码

[源代码](../src/96-unique-binary-search-trees.cpp)