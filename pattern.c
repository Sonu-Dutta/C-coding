#include<stdio.h>
void pattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }
    pattern(n-1);
    for (int i = 0; i <(2*n-1) ; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main() 
{
    int n;
    printf("Enter the number of rows for pyramid = ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}