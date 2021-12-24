#include <stdio.h>

int main()
{
    int mark[]={1,2,3};
    printf("The value of mark[1] is %d \n",mark[1]);

    int marks[4];
    
    printf("Enter the marks of student 1 = ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2 = ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3 = ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4 = ");
    scanf("%d", &marks[3]);

    printf("You have entered the marks %d, %d, %d, %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}