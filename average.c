#include<stdio.h>
float average(int a , int b ,int c)
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}int main()
{
    int d,e,f;
    printf("enter a number = ");
    scanf("%d",&d);
    printf("enter a number = ");
    scanf("%d",&e);
    printf("enter a number = ");
    scanf("%d",&f);
    printf("the average is %.3f", average(d,e,f));
    
    return 0;
}
