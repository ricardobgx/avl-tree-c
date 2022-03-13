#include <stdio.h>
#include "info.h"
#include "avltree.h"

int main(int argc, char *argv[])
{
  AvlTree *tree = createTree();

  addTree(&tree, 1);
  addTree(&tree, 2);
  addTree(&tree, -1);

  printTree(tree);
  printf("\n");

  removeTree(&tree, 2);
  printTree(tree);
  printf("\n");

  destroyTree(&tree);
  printTree(tree);
  printf("\n");

  return 0;
}