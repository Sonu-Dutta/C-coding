#include<stdio.h>
// void print_array(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d \n",i+1,*(ptr+i));
//     }
    
// }

// or you can do in this way

void print_array(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d \n",i+1,ptr[i]);
    }
    ptr[2]=95; //this value will change in main
}

int main(){
    int arr[]={21,37,84,75,75,23,20};
    print_array(arr,7);
    printf("%d",arr[2]);
    return 0;
}