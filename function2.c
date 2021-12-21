#include<stdio.h>
int sum(int a , int b)
{
    int result;
    result=a+b;
    return result;
}
int main(){
    int c,e,f;
    printf("Enter number-1 = ");
    scanf("%d",&e);
    printf("Enter number-2 = ");
    scanf("%d",&f);
    c=sum(e,f);
    printf("The sum is %d",c);
    return 0;
}
