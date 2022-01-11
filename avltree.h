#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

typedef struct avl_tree {
    struct avl_tree *left_child;
    struct avl_tree *right_child;
    int num;
} avl_tree_t;

avl_tree_t *create_avl_tree();

#endif // AVLTREE_H_INCLUDED
