#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
    int n;
    printf("Enter the number of employee = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct employee e[n];

        printf("Enter the value of code for employee %d : ", i);
        scanf("%d", &e[n].code);

        printf("Enter the value of salary for employee %d : ", i);
        scanf("%f", &e[n].salary);

        printf("Enter the name of employee %d : ", i);
        scanf("%s", e[n].name);
        
        printf(" %d %.2f %s \n", e[n].code, e[n].salary, e[n].name);
    }

    return 0;
}