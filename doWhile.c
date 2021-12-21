/*do-while, break*/
#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("Enter a number = \n");
    scanf("%d",&n);
    do
    {
        printf("Value of i is %d \n", i++);
        if (i==50)
        {
            break;
        }      
    } while (i<n+1);    
    return 0;
}
