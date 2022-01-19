#include "traverse.h"

#include <stdio.h>

void traverse(const Node *n) {
  if (n == NULL) return;
  printf("value = %d\n", n->value);
    traverse(n->left);
    traverse(n->right);
  // 表示は printf("value = %d\n", n->value); のような形で良い
}
