#include<stdio.h>

int main()
{

    // int n;
    // printf("enter a number = ");
    // scanf("%d",&n);
    // for (int i = n; i ; i--)
    // {
    //     printf("value of i is %d \n", i);
    // }

        int n;
    printf("enter a number = ");
    scanf("%d",n);
    for (int i = 0; i<n ; i++)
    {
        printf("value of i is %d \n", i);
        if (i==10)
        {
            break;
        }
        
    }
    return 0;
}