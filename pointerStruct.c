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
    struct employee e;
    struct employee *ptr;
    ptr=&e;
    //(*ptr).code=101;
    //OR
    ptr->code=101;

    printf(" code: %d \n", e.code);
    printf(" code: %d \n", (*ptr).code);

    return 0;
}