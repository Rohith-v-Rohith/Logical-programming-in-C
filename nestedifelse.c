/*write a program to determain the Nested if-else ? */

#include<stdio.h>
int main() {
    int a, b , c;
    printf("enter the data : ");
    scanf("%d%d%d",&a,&b,&c);
        if(a>b){
            if(a>c){
                printf("a is big");
            }else{
                printf("c is big");
            }
        }else{
            if(b>c){
                printf("b is big");
            }else{
                printf("c is big");
            }
        }
    return 0;
}