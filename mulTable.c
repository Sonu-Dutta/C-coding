// Multiplication table generator upto desired number
#include <stdio.h>
int main()
{
    int n,v;
    printf("\nEnter the number of the table you want to know = ");
    scanf("%d", &n);
    printf("\nUp to how much value you want to know = ");
    scanf("%d", &v);
    printf("\nThe table of %d upto %d : \n",n,v);
    int mul[v];
    for (int i = 0; i < v; i++)
    {
        mul[i]=n*(i+1);
        printf("%d X %d = %d\n",n,i+1,mul[i]);
    } 
    return 0;
}
