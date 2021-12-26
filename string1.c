//iterating through a string by while loop
#include <stdio.h>
int main()
{
    char str[] = "sonu dutta";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
