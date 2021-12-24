// Array-pointer example:
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of student  = ");
    scanf("%d", &n);
    int marks[n];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of student %d = ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of marks for student %d = %d \n", i + 1, marks[i]);
    }
    return 0;
}
