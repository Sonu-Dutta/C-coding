#include<stdio.h>
int sum(int a , int b)
{
    int result;
    result=a+b;
    return result;
}
int main(){
    int c,e,f;
    printf("Enter a number = ");
    scanf("%d",&e);
    printf("Enter a number = ");
    scanf("%d",&f);
    c=sum(e,f);
    printf("The value of c is %d",c);
    return 0;
}
