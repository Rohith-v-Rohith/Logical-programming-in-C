/*Swapping of 2 numbers [using temp variable] ? */

#include<stdio.h>
int main () {
    int a , b, temp;
    scanf("%d%d",&a,&b);
    printf("before:a=%d b=%d\n",a,b);

    temp = a;
       a = b;
       b =temp;
    printf("after:a=%d b=%d\n",a,b);

return 0;
}