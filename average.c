/*Average of 3 numbers*/
#include<stdio.h>
float average(int a , int b ,int c)
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}int main()
{
    int d,e,f;
    printf("Enter number-1 = ");
    scanf("%d",&d);
    printf("Enter number-2 = ");
    scanf("%d",&e);
    printf("Enter number-3 = ");
    scanf("%d",&f);
    printf("The average is %.3f", average(d,e,f));
    
    return 0;
}
