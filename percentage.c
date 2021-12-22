//Result of 3 subject's marks
#include<stdio.h>
int main(){
    int sub1,sub2,sub3;
    float total;
    printf("Enter sub-1 marks = ");
    scanf("%d", &sub1);
    printf("Enter sub-2 marks = ");
    scanf("%d", &sub2);
    printf("Enter sub-3 marks = ");
    scanf("%d", &sub3);
    total=(sub1 + sub2 + sub3)/3;
    if ((total<=40) || sub1<=33 || sub2<=33 || sub3<=33 )
    {
         printf("Your percentage is %f and you are fail...",total);
    }
    else
    {
        printf("Your percentage is %f and you are pass...!!!",total);
    } 
    return 0;
}
