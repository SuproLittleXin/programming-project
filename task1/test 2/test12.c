#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadtree.h"

//test functions
void destroy_quad(Node *head);

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make a non-uniform tree
  grow_tree(head);
  makeChildren(head->child[0]);
  //destroy the tree
  destroy_quad(head);
  return 0;
}
