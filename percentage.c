#include<stdio.h>

int main(){
    int sub1,sub2,sub3;
    float total;
    printf("enter sub 1 marks = ");
    scanf("%d", &sub1);
    printf("enter sub 2 marks = ");
    scanf("%d", &sub2);
    printf("enter sub 3 marks = ");
    scanf("%d", &sub3);
    total=(sub1 + sub2 + sub3)/3;
    if ((total<=40) || sub1<=33 || sub2<=33 || sub3<=33 )
    {
         printf("your percentage is %f and you are fail",total);
    }
    else
    {
        printf("your percentage is %f and you are pass",total);
    }
   
    return 0;
}