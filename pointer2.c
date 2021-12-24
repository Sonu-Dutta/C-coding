#include<stdio.h>

int main(){
    int i=4;
    int *ptr=&i;
    int **ptr_ptr=&ptr;
    printf("Value of i %d",**ptr_ptr);
    return 0;
}