#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("enter a number = \n");
    scanf("%d",&n);
    do
    {
        printf("value of i is %d \n", i++);
        if (i==50)
        {
            break;
        }
        
    } while (i<n);
    
    
    return 0;
}