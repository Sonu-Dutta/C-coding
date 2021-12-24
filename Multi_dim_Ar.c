#include <stdio.h>

int main()
{
    int stud, sub, n;
    printf("Enter the number of students = ");
    scanf("%d", &stud);
    printf("Enter the number of subjects = ");
    scanf("%d", &sub, &n);
    int marks[stud][sub];
    for (int i = 0; i < stud; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            for (n = 0; n == j; n++)
            {
                printf("\n");
            }

            printf("Enter the marks of student %d in subject %d = ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    printf("\nX----X----result----X----X\n");

    for (int i = 0; i < stud; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            for (n = 0; n == j; n++)
            {
                printf("\n");
            }

            printf("The marks of student %d in subject %d = %d \n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}