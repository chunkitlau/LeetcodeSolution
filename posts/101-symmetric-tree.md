# 101. 对称二叉树

## 题目描述

给一个二叉树根节点，判断是否轴对称。

## 解题方法

使用深度优先搜索比较两棵树是否是对称的，根节点的两个子树需要是对称的。如果两棵树x、y是对称的，那么x的左子树和y的右子树是对称的，x的右子树和y的左子树是对称的，递归判断即可。时间复杂度为O(n)，空间复杂度为O(n)，其中n为树的节点数。

## 源代码

[源代码](../src/101-symmetric-tree.cpp)
