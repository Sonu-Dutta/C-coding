#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RockPaperScissor(char you, char comp)
{
    //returns 1 if you win, -1 if you lose and 0 if its draw
    //condition for draw
    // rr pp ss
    if (you == comp)
    {
        return 0;
    }
    //non draw condition
    //rs sr
    //rp pr
    //ps sp
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int num;
    

    //Random Generator
    srand(time(0));
    num = rand() % 100 + 1;
    if (num < 33)
    {
        comp = 'r';
    }
    else if (num > 33 && num < 66)
    {
        comp = 's';
    }
    else
    {
        comp = 'p';
    }

    //User input
    printf("\nEnter 'r' for rock, 'p' for paper, 's' for scissors : ");
    scanf("%c", &you);

 

    // char *val[10];
    // char rock[5]="rock", paper[5]="Paper", scis[10]="Scissors";
    // if (val == 'r')
    // {
    //     *val= &rock;
    // }
    // else if (val == 'p')
    // {
    //    *val= &paper;
    // }
    // else //if(val == 's')
    // {
    //     *val= &scis;
    // }
    // printf("%s",val);

    //Result

    if (you != 'r' && you != 'p' && you != 's')
    {
        printf("!!!Invalid Input!!!\n   Game error   \n   Try again   \n");
    }
    else
    {
        int result = RockPaperScissor(you, comp);

        printf("\nYou choosed %c and computer choosed %c\n", you, comp);
        if (result == 0)
        {
            printf("\n!Game Draw!\n\n");
        }
        else if (result == 1)
        {
            printf("\n!!!Yeahhh!!!\n  !You Win!\n\n");
        }
        else
        {
            printf("\n !!!Oops!!!\n!You Loose!\n\n");
        }
    }
    return 0;
}