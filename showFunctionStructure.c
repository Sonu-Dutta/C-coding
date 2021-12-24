#include <stdio.h>
#include <string.h>

struct Employee
{
    int code;
    float salary;
    char name[100];
};
void show(struct Employee emp)
{
    printf("The code of employee is : %d\n", emp.code);
    printf("The salary of employee is : %.2f\n", emp.salary);
    printf("The name of employee is : %s\n", emp.name);
    emp.code = 34;
}
int main()
{
    struct Employee e;
    struct Employee *ptr;
    ptr = &e;
    ptr->code = 101;
    ptr->salary = 109999;
    strcpy(ptr->name, "Vaishakhi");
    printf("The code of employee is : %d\n", e.code);
    show(e);

    return 0;
}