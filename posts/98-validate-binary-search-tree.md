# 98. 验证二叉搜索树

## 题目描述

给一个二叉树根节点，判断是否是有效的的二叉搜索树。

## 解题方法

一棵二叉搜索树的两个子树也都是二叉搜索树，并且根节点值在左子树最大值和右子树最小值之间，在深度优先搜索的同时记录子树是否是二叉搜索树，最小值和最大值。子树最小值等于左子树最小值或者是根节点值，最大值等于右子树最大值或者是根节点值。时间复杂度为O(n)，空间复杂度为O(n)，其中n为树的节点数。

## 源代码

[源代码](../src/98-validate-binary-search-tree.cpp)