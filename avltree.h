#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

#include "info.h"

struct avl_tree
{
  struct avl_tree *left_child;
  struct avl_tree *right_child;
  Info *info;
} typedef AvlTree;

AvlTree *createTree();

void addTree(AvlTree **tree, int value);

void removeTree(AvlTree **tree, int value);

void destroyTree(AvlTree **tree);

void printTree(AvlTree *tree);

#endif