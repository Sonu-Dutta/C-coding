// Sructure, if-else example: Comparison of dates
#include <stdio.h>
#include <string.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;
void display(date d)
{
    printf("The date is : %d/%d/%d\n", d.day, d.month, d.year);
}
int datecmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        printf("Date 1 is greater");
    }
    else if (d1.year < d2.year)
    {
        printf("Date 2 is greater");
    }

    else if (d1.month > d2.month)
    {
        printf("Date 1 is greater");
    }
    else if (d1.month < d2.month)
    {
        printf("Date 2 is greater");
    }

    else if (d1.day > d2.day)
    {
        printf("Date 1 is greater");
    }
    else if (d1.day < d2.day)
    {
        printf("Date 2 is greater");
    }

    else 
    {
        printf("Date are equal");
    }
}
int main()
{
    date d1 = {15, 7, 21};
    date d2 = {23, 4, 19};
    display(d1);
    display(d2);
    int a = datecmp(d1, d2);
    return 0;
}
