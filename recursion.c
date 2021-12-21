/*To find factorial of a number using recursion*/
#include<stdio.h>
int factorial(int x)
{
    printf("Calling factorial %d \n",x);
    if (x==1 || x==0)
    {
        return 1;
    }
    else
    {
       return x * factorial(x-1);
    }
}
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}
