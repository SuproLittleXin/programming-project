#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadtree.h"
//test function
void removeChildren(Node *parent);
void destory_quad(Node *head);

int main( int argc, char **argv ) {

  Node *head,*luckyParent;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make non-uniform tree
  grow_tree(head);
  makeChildren(head->child[0]);
  makeChildren(head->child[2]);
  //decide a parent whose children are going to be removed
  luckyParent=head->child[0];
  removeChildren(luckyParent);
  writeTree(head);
  //destory the tree
  destory_quad(head);
  return 0;
}

void destory_quad(Node *head){
    int i;
    if (head->child[0]==NULL)
        free(head);
    else{
        for (i=0;i<4;i++)
            destory_quad(head->child[i]);
        free(head);
    }
}
