#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[100];
}em;
void show( em emp)
{
    printf("The code of employee is : %d\n", emp.code);
    printf("The salary of employee is : %.2f\n", emp.salary);
    printf("The name of employee is : %s\n", emp.name);

} 
int main()
{
    em e;
    em *ptr;   
    ptr = &e;
    ptr->code = 108;
    ptr->salary = 9900000;
    strcpy(ptr->name, "Anjana");
   
    show(e);

    return 0;
}