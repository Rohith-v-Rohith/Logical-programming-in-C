/* using conditional operator find the 3 biggest numbers ? */

#include<stdio.h>
int main () {
    int a=10,b=20,c=30;
    // ternery operetor 
    a>b && a>c ? printf("%d is big",a):b>c? printf("%d is big",b):printf("%d is big",c);
return 0;
}