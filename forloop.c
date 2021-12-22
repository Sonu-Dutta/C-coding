//Printing a number in ascending and descending order
#include<stdio.h>
int main()
{
 printf("Enter a number = ");
    scanf("%d",&n);
    printf("\nNumbers in ascending order");
    for (int i = 1; i<=n ; i++)
    {
        printf("\nvalue of i is %d ", i);
      
     }
     printf("\n \nNumbers in descending order");
      for (int i = n; i ; i--)
    {
        printf("\nvalue of i is %d ", i);
    }
    return 0;
}
