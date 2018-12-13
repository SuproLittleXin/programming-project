#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadtree.h"

//test functions
void setFlag(Node *head);
void make_dataBased_tree(Node *head);
void adapt(Node *head);

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make a full tree at level 2
  grow_tree(head);
  grow_tree(head);
  grow_tree(head);
  iniValue(head);
  adapt(head);
  writeTree(head);
  return 0;
}
