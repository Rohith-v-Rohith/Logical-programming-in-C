/* print the value is even or odd number using if else statement ?*/

#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n); //reading n value

        if(n % 2 == 0){ //% => reminder or modulus opertator
            printf("%d is even",n);
        }else{
            printf("%d is odd",n);
        }
return 0;
}