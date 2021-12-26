//pointer to pointer example:
#include<stdio.h>
int main(){
    int i=9;
    int *p=&i;
    int **q=&p;
    printf("Value of i is %d",**q);
    return 0;
}
