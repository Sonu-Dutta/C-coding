//random genrator game in which you have to guess the number 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num , guess , guesses=1;
    srand(time(0));
    num = rand()%100+1;
    // printf("the number is %d",num); 
    //this generates a random number

    do{
       printf("Guess a number between 1 to 100 = ");
       scanf("%d",&guess);

   
    if (guess>num)
       {
           printf(" Lower number please! \n ");
           if (guess>=101)
       {
           printf(" !!! Invalid Input !!! \n");
       }

       }
       else if (guess<num)
       {
           printf(" Higher number please! \n ");
           if (guess<=0)
       {
           printf(" !!! Invalid Input !!! \n");
       }
       }
       else
       {
           printf("Yeahh...\n You have guessed it correct ;) \n Answer is %d \n Number of attempts you made = %d ",num,guesses);
       }
       guesses++;
    }
        while (num!=guess);
    return 0;
}