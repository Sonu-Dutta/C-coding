// char example:
#include <stdio.h>
void encrypt(char *m)
{
    char *ptr = m;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[100];
    printf("Enter your message : ");
    gets(c);
    encrypt(c);
    printf("Encrypted message is : %s", c);
    return 0;
}
