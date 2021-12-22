#include<stdio.h>
int main()
{
    int i=1,sum=1, n;
    printf("enter a number = ");
    scanf("%d",&n);
    // for ( i = 0; i <= n; i++)
    // {
    //     sum  += i;
    // }
     while ( i <= n)
    {
        sum  += i;
        i++;
    }
    printf("The value of sum(1 to %d) is %d ",n,sum);
    return 0;
}