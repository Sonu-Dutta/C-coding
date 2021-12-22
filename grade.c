//ranging in case
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks ");
    scanf("%d",&marks);
    switch (marks)
    {
    case 90 ... 100:
       printf("Grade is A");
         break;
    case 80 ... 89:
       printf("Grade is B");
        break;
    case 70 ... 79:
       printf("Grade is C");
        break;
    case 60 ... 69:
       printf("Grade is D");
        break;
    case 50 ... 59:
       printf("Grade is E");
        break;
    default:
        printf("Grade is F");
        break;
    }
    return 0;
}
