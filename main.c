#include <stdio.h>
#include <stdlib.h>
struct node{
    int a; 
    struct node *next;
};
typedef struct node Node;
int add(int a, int b){
    return(a+b);
}
char print(char a[256]){
    printf("%s", a);
    return 0;
}
int main(){
/* For some reason there is no code yet. It'll come soon.  */
    int a;
    int b;
    a=add(1,2);
    printf("%i", a);
    print("a");
    return 0;
}