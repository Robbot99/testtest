#ifndef ADDTO
#define ADDTO
#include "the_node_def.h"

Node *addto(Node *pointer, int zahl){
    if(pointer == NULL){
        pointer=malloc(sizeof(Node));
        pointer->next=NULL;
        pointer->a=zahl;
        printf("%d", pointer->a);
        pointer=pointer->next;
    }
    return 0;
}

#endif 