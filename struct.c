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
    e1.code = 100;
    e1.salary = 99000;
    strcpy(e1.name, "Anjana");

    printf("Enter the value of code = ");
    scanf("%d",&e1.code);
    
    printf("Enter the value of salary = ");
    scanf("%f",&e1.salary);
    
    printf("Enter the value of name = ");
    scanf("%s",e1.name);

    printf(" %d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}