// functions and pointer example:
#include<stdio.h>
void sum_avg(int a,int b, int*sum, float*avg)
{
    *sum=a+b;
    *avg=(float)(*sum)/2;
}
int main(){
    int a=15, b=4 , sum;
    float avg;
    sum_avg(a,b,&sum,&avg);
    printf("Sum of a and b is %d\n",sum);
    printf("Average of a and b is %.2f\n",avg);
    return 0;
}
