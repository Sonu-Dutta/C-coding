#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will store the adress of i
    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", *j);
    printf("The address of i is %d \n", &i);
    printf("The address of i is %d \n", j);
    printf("The address of j is %d \n", &j);
    printf("The value of j is %d \n", *(&j));
    return 0;
}