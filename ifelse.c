/*write a programe to print the Biggest of 2 number ? */

#include<stdio.h>
int main () {
    int a, b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);

        if(a>b){
            printf("a=%d is big",a);
        }else{
            printf("b=%d is big",b);
        }
        
    return 0;
}