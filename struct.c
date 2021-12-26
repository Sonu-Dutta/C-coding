//Structure Example:
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
    struct employee e1;
    e1.code = 1001;
    e1.salary = 999500.5678;
    strcpy(e1.name, "Anjana");
    printf("Details for Employee-1 \n");
    printf(" %d %.2f %s \n \n",e1.code,e1.salary,e1.name);
    
    printf("Details for Employee-2 \n");
    printf("Enter the value of code = ");
    scanf("%d",&e1.code);
    
    printf("Enter the value of salary = ");
    scanf("%f",&e1.salary);
    
    printf("Enter the value of name = ");
    scanf("%s",e1.name);

    printf(" %d %.2f %s",e1.code,e1.salary,e1.name);
    return 0;
}
