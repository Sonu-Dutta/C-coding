//Sum of numbers from 1 to n (given number)
#include<stdio.h>
int main()
{
    int i=1,sum=1, n;
    printf("Enter a number = ");
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
