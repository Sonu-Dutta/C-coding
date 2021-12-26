//string example:
#include<stdio.h>
#include<string.h>

int main(){
    char str[]={'S','o','n','u',' ','d','u','t','t','a', '\0'};//0 is null character
    printf("%s\n",str);
    
    int a =strlen(str);
    printf("the length of string is %d ",a);
    return 0;
}
