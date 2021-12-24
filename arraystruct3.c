// Structure example:
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    float salary;
    char name[100];
};
int main()
{
    struct employee e={10,950000,"Sonu Dutta"};
    printf(" Id: %d \n Salary: %.2f per month \n Name: %s", e.id, e.salary, e.name);
    return 0;
}
