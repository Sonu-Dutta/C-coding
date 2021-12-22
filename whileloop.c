//while loop eg
#include<stdio.h>
int main(){
    int a=0;
    printf("Enter a number less than 20 and greater than 10 : ");
    scanf("%d",&a);
    while (a<=20)
    {
        if (a>=10)
        {
            printf("%d \n",a);
        }        
        a++;
    }   
    return 0;
}
