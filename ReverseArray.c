// Iterative C program to reverse an array
#include<stdio.h>
void rvArray(int arr[], int start, int end)
{
	int temp;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++){
	printf("%d ", arr[i]); 
}
printf("\n");
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int a = sizeof(arr);
    int b = sizeof(arr[0]);
    int n=a/b;
    //printf("sizeof(arr) = %d \nsizeof(arr[0]) = %d \nn = %d \n",a,b,n);
    printf("Original array is \n");
	printArray(arr, n);
	rvArray(arr, 0, n-1);
	printf("Reversed array is \n");
	printArray(arr, n);
	return 0;
}
