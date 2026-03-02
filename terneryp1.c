/* problem-2 => Find the biggest of 2 numbers using conditial operator(ternery) ? */

#include<stdio.h>
int main () {
    int a=10 , b=20;
    scanf("%d%d",&a , &b);

    a>b ? printf("a is big"): printf("b is big");
return 0;
}