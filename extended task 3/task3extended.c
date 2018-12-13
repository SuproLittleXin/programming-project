#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadtree.h"

#define maxLevel 6
int add=0,rem=0;
int lastTimeADD=0;

//set all nodes' flag value to 0
void iniValue(Node *head){
    int i;
    if (head->child[0]==NULL){
        head->flag=0;
    }
    else{
        for (i=0;i<4;i++)
            iniValue(head->child[0]);
	head->flag=0;
    }
}
//step 1
void setFlag(Node *head){
    int i;
    if (head->child[0]==NULL){
        if (nodeValue(head,0.0)>0.5)
            head->flag=1;
        else if (nodeValue(head,0.0)< -0.5)
            head->flag=-1;
        else
            head->flag=0;

    }
    else {
        head->flag=0;
        for (i=0;i<4;i++)
            setFlag(head->child[i]);
    }
}
//step 2
void make_dataBased_tree(Node *head){
    int i;
    int flagValue1,flagValue2,flagValue3,flagValue0;
    //the node doesn't have children, at the same time,if its value equals to 1, then make children
    if (head->child[0]==NULL){
        if (head->flag==1&&head->level<maxLevel){
            makeChildren(head);
            add+=4;
        }

    }
    else{
        flagValue0=head->child[0]->flag;
        flagValue1=head->child[1]->flag;
        flagValue2=head->child[2]->flag;
        flagValue3=head->child[3]->flag;
        if (flagValue0==-1&&flagValue1==-1&&flagValue2==-1&&flagValue3==-1){
            removeChildren(head);
            rem+=4;
        }
        else{
                for (i=0;i<4;i++)
                make_dataBased_tree(head->child[i]);
        }
    }
}
//print the remove numbers and the add numbers
void print_numbers(Node *head){
    make_dataBased_tree(head);
    printf("ADD times:%d.\n",add);
    printf("REMOVE times:%d.\n",rem);
}

//remove children function in task2
void removeChildren(Node *parent){
    int i;
    for (i=0;i<4;i++){
        free(parent->child[i]);
        parent->child[i]=NULL;
    }
}

void adapt(Node *head){
    setFlag(head);
    print_numbers(head);
    if (add!=lastTimeADD){
        lastTimeADD=add;
        adapt(head);
    }
}

