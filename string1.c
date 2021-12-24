#include <stdio.h>

int main()
{
    char str2[] = "sonu dutta";
    char *ptr = str2;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}