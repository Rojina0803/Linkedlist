#include<stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node *next;
};

typedef struct Node Newnode;
Newnode* head;

int main(){
Newnode *p;

p=(Newnode*)malloc(sizeof(Newnode));
if (p == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }
p->data= 10;
p->next= NULL;
head =p;
free(p);
return 0;
}