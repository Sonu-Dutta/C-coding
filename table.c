#include<stdio.h>

int main(){
    int a;
    printf("multiplication table of = ");
    scanf("%d",&a);
    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d \n" , a , i , a*i);
        if (i>12)
        {
            break;
        }
        
    }
    

    return 0;
}