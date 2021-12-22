//reverse multiplication table
#include<stdio.h>
int main(){
    int a;
    printf("Multiplication table of : ");
    scanf("%d",&a);
    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d \n" , a , i , a*i);     
    }
    return 0;
}
