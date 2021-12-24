#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
}vec;
struct vector sumvector(struct vector v1,struct vector v2){
struct vector result;
result.x = v1.x  + v2.x;
result.y = v1.y + v2.y;
return result; 
}
int main(){
    struct vector v1, v2 , sum;
v1.x=4;
v1.y=5;
printf("         x dimension : %d | y dimension : %d\n",v1.x,v1.y);
    v2.x=2;
v2.y=3;
printf("         x dimension : %d | y dimension : %d\n",v2.x,v2.y);
int i=0;
while (i<43)
{   i++;
   printf("-");
}


 
 sum = sumvector(v1,v2);
 printf("\nsum of : x dimension : %d | y dimension : %d\n",sum.x,sum.y);

    return 0;
} 