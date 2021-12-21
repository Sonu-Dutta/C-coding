/*do-while, if-else, continue*/
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
        if (i!=5)
        {
            continue;
        }
        else{
            printf("%d \n",i);
        }   
    } while (i<n);    
    return 0;
}
