// 3-D array example: All the values point to same memory address
#include <stdio.h>
int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The adress of array [%d][%d][%d] is %u \n", i, j, k, arr[2][3][4]);
            }
        }
    }
    return 0;
}
