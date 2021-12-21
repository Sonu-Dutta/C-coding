#include<stdio.h>
int sum(int a , int b)
{
    int result;
    result=a+b;
    return result;
}
int main(){
    int c,e,f;
    printf("enter a number = ");
    scanf("%d",&e);
    printf("enter a number = ");
    scanf("%d",&f);
    c=sum(e,f);
    printf("the value of c is %d",c);
    return 0;
}
