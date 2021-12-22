#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks ");
    scanf("%d",marks);
    switch (marks)
    {
    case 90-100:
       printf("grade is A");
        // break;
    case 80-89:
       printf("grade is B");
        break;
        
    default:
        printf("grade is F");
        break;
    }

    return 0;
}