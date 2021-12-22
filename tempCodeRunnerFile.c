//printing multiplication table
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr, no;
   ptr = (int *)malloc(10 * sizeof(int));
   
   printf("Enter a number: ");
   scanf("%d",&no);
   for (int i = 0; i < 10; i++)
   {
      ptr[i] = no * (i + 1);
      printf("%d X %d : %d\n",no, i + 1, ptr[i]);
   }
   printf("\n..........................................\n \n");
   ptr = realloc(ptr, 15 * sizeof(int));
   for (int i = 0; i < 15; i++)
   {
      ptr[i] = no * (i + 1);
      printf("%d X %d : %d\n",no, i + 1, ptr[i]);
   }
   return 0;
}
