/*find the 3 biggest number using if-else block ? */

#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

        if(a>b && a>c){
           printf("a is big",a);
        }else if (b>c){
            printf("b is big",b);
        }else{
            printf("c is big",c);
        }
        
    return 0;
}