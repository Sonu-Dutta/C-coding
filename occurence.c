#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0; 
    // while (*ptr != '\0')
    // {
        if (*ptr == c)
        {
            // count++;
                printf("The given value is present \n");
        }
        // ptr++;
        else{
            printf("The given value is not present \n");
        }
    // }

    return count;
}

int main()
{
    char st[] = "sooonuu";
    int count = occurence(st, 'a');
    // printf("occurence = %d", count);
    return 0;
}