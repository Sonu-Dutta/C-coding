/*factorial using for-loop*/
#include<stdio.h>
int main(){
    int i=0,n,fac=1;
    printf("Enter a number = ");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++)
    {
        fac*=i;
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}
