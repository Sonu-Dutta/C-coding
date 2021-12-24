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

    struct employee e={100,345500,"sanjay"};
    printf(" code: %d \n salary: %.2f per month \n name: %s", e.code, e.salary, e.name);

    return 0;
}