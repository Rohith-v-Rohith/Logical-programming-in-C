/*swapping of 2 numbers [without using temp variable] ? */

#include<stdio.h>
int main () {
    int a=10,b=20;
    printf("before swap a=%d b=%d\n",a,b);
        a= a + b; // a+b=>, 10+20=>, a=30;
        b= a - b;//  a-b=>, 30-20=>, b=10;
        a= a - b;//  a-b=>, 30-10=>, a=20;
        
    printf("after swap a=%d b=%d\n",a,b);
return 0;
}