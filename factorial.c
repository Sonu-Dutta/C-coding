#include<stdio.h>

int main(){
    int i=0,n,fac=1;
    printf("enter a number = ");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++)
    {
        fac*=i;
    }
    printf("the value of factorial %d is %d",n,fac);
    return 0;
}