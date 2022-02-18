#include <stdio.h>
#include <stdlib.h>
#include "addto.h"
// a C project


int add(int a, int b){
    return(a+b);
}
char print(char a[256]){
    printf("%s", a);
    return 0;
}
int main(){
/* For some reason there is no code yet. It'll come soon.  */
    Node *root =NULL;
    root=NULL;
    int number;
    for(number=0; number < 10; number++){
        addto(root, number);
    }
    


    /*int a;
    int b;
    a=add(1,2);
    printf("%d", a);
    print("a");*/
    return 0;
}