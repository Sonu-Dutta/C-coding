// array example: Passing array as parameter to a function. 
#include<stdio.h>
// method-1

// void print_array(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d \n",i+1,*(ptr+i));
//     }
//         ptr[2]=95; //this value will change in main
// }

//method-2

void print_array(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n",i+1,ptr[i]);
    }
    ptr[2]=95; //this value will change in main
}

int main(){
    int arr[]={18,57,94,92,85,29,20};
    print_array(arr,7);
    printf("%d",arr[2]);
    return 0;
}
