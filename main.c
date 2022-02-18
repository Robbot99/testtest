#include <stdio.h>
#include <stdlib.h>
#include "addto.h"
// a C project
/* For some reason there is no code yet. It'll come soon.  */

int main(){
    Node *root =NULL;
    root=NULL;
    int number;
    for(number=0; number < 10; number++){
        addto(root, number);
    }

    return 0;
}