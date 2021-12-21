/*To find the biggest number, from 4 numbers*/
#include<stdio.h>
int main(){
    int n1, n2 , n3 , n4;
    printf("Enter the number 1 = ");
    scanf("%d",&n1);
    printf("Enter the number 2 = ");
    scanf("%d",&n2);
    printf("Enter the number 3 = ");
    scanf("%d",&n3);
    printf("Enter the number 4 = ");
    scanf("%d",&n4);
    if(n1>n2)
    {
      if (n1>n3)
      {
          if (n1>n4)
          {
              printf("%d is the biggest number.",n1);
          }
          else
          {
              printf("%d is the biggest number.",n4);
          }
      }
      
    }
    else if (n2>n3)
    {
        if (n2>n4)
        {
            printf("%d is the biggest number.",n2);
        }
        else
        {
            printf("%d is the biggest number.",n4);
        }
        
    }
    else if (n3>n4)
    {
       printf("%d is the biggest number.",n3);
    }
    else
    {
        printf("%d is the biggest number.",n4);
    }
    return 0;
}
