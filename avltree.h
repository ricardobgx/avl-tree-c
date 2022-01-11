#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

typedef struct avl_tree {
    struct avl_tree *left_child;
    struct avl_tree *right_child;
    int num;
} AvlTree;

AvlTree *create_avl_tree();

#endif // AVLTREE_H_INCLUDED
