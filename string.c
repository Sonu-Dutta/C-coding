#include<stdio.h>
#include<string.h>

int main(){
    char str[]={'S','o','n','u','d','u','t','t','a', '\0'};//0 is null character
    int a =strlen(str);
    printf("%s\n",str);
    printf("the length of string is %d ",a);
    // printf("%s",str2);
    return 0;
}