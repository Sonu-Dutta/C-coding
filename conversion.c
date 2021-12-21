#include<stdio.h>

int main(){
    int a;
    float cel,far,kel;
    printf("enter\n '1' for celsius to farenheit \n '2' for celsius to kelvin \n '3' for farenheit to celsius \n '4' for farenheit to kelvin \n '5' kelvin to celsius \n '6' kelvin to farenheit \n =");
    scanf("%d", &a);
    switch (a)
    {
    case 1: 
        printf("you have selected 'celsius to farenheit' \n");
        printf("enter value of celsius = \n");
        scanf("%f",cel);
        printf("%f celsius to %f farenheit \n", cel , (cel*9/5)+32);
        break;
     case 2: 
        printf("you have selected 'celsius to kelvin' \n");
        printf("enter value of celsius = \n");
        // scanf("%f",cel);
        printf("%f celsius to  %f  kel \n", cel , (cel*9/5)+32);
        break;

    default:
        break;
    }
       
    
    // if (a<=6)
    // {
    //     printf("enter the value of celsius = ");
    //     scanf("%f", &celsius);
    //     printf("%f celsius = %f farenheit \n", celsius , (celsius*9/5)+32);
    // }
    // else if (a!='c' && a!='f')
    // {
    //    printf("entered value is not valid");
    // }
    // else
    //     {
    //         printf("enter the value of farenheit = ");
    //         scanf("%f", &faren);
    //         printf("%f farenheit = %f celsius\n", faren , (faren-32)*5/9);
    //     }

    return 0;
}