#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadtree.h"

void destroy_quad(Node *head){
    int i;
    if (head->child[0]==NULL)
        free(head);
    else{
        for (i=0;i<4;i++)
            destroy_quad(head->child[i]);
        free(head);
    }
}

