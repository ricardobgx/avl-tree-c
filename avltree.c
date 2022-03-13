#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "avltree.h"

AvlTree *createTree()
{
  return NULL;
}

void addTree(AvlTree **tree, int value)
{
  if (*tree == NULL)
  {
    AvlTree *newTree = (AvlTree *)malloc(sizeof(AvlTree));
    newTree->left_child = NULL;
    newTree->right_child = NULL;
    newTree->info = createInfo(value);

    *tree = newTree;
  }
  else if (value < (*tree)->info->value)
  {
    addTree(&(*tree)->left_child, value);
  }
  else
  {
    addTree(&(*tree)->right_child, value);
  }
}

void removeTree(AvlTree **tree, int value)
{
  if (*tree == NULL)
  {
    return;
  }

  if ((*tree)->info->value == value)
  {
    destroyTree(&(*tree));
  }
  else if (value < (*tree)->info->value)
  {
    removeTree(&(*tree)->left_child, value);
  }
  else
  {
    removeTree(&(*tree)->right_child, value);
  }
}

void destroyTree(AvlTree **tree)
{
  if (*tree != NULL)
  {
    destroyTree(&(*tree)->left_child);
    destroyTree(&(*tree)->right_child);

    destroyInfo(&(*tree)->info);

    free(*tree);
    *tree = NULL;
  }
}

void printTree(AvlTree *tree)
{
  printf("( ");

  if (tree != NULL)
  {
    printf("%d ", tree->info->value);

    printTree(tree->left_child);
    printTree(tree->right_child);
  }

  printf(")");
}

int balancingFactor(AvlTree *tree)
{
  return treeHeight(tree->right_child) - treeHeight(tree->left_child);
}

int treeHeight(AvlTree *tree)
{
  if (tree == NULL)
  {
    return 0;
  }

  int left_child_height = treeHeight(tree->left_child);
  int right_child_height = treeHeight(tree->right_child);

  if (left_child_height > right_child_height)
  {
    return left_child_height + 1;
  }

  return right_child_height + 1;
}