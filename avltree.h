#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

#include "info.h"

/*******************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Struct of an AVL Tree
 ***************************************** */
struct avl_tree
{
  struct avl_tree *left_child;
  struct avl_tree *right_child;
  Info *info;
} typedef AvlTree;

/**************************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Create an AVL Tree with defaut NULL value
 ************************************************ */
AvlTree *createTree();

/***************************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Add a value in an AVL Tree
 * @param tree Pointer address of an AVL Tree
 * @param value Value to be inserted into a AVL Tree
 ************************************************* */
void addTree(AvlTree **tree, int value);

/**************************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Add a value in an AVL Tree
 * @param tree Pointer address of an AVL Tree
 * @param value Value to be removed from a AVL Tree
 ************************************************ */
void removeTree(AvlTree **tree, int value);

/***********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Destroy an AVL Tree
 * @param tree Pointer address of an AVL Tree
 ********************************************* */
void destroyTree(AvlTree **tree);

/***********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Print the values of an AVL Tree
 * @param tree Pointer address of an AVL Tree
 ********************************************* */
void printTree(AvlTree *tree);

/******************************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Calculate the balancing factor of an AVL Tree
 * @param tree Pointer of an AVL Tree
 **************************************************** */
int balancingFactor(AvlTree *tree);

/********************************************
 * @author Jose Ricardo Brasileiro Goncalves
 * @brief Calculate the height of an AVL Tree
 * @param tree Pointer of an AVL Tree
 ****************************************** */
int treeHeight(AvlTree *tree);

#endif