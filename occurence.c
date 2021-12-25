// string example:
#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0; 
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
           count++;
        }
         ptr++;
    }
    return count;
}
int main()
{
    char st[] = "sooonuu";
    int count = occurence(st, 'u');
 printf("occurence = %d", count);
    return 0;
}
