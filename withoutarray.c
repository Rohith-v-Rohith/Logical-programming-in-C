/*Find the largest number without array ? */
#include<stdio.h>
int main () {
    int n,i,large=0,ele;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("%d you entered : ",n);

    for(i=1; i<=n; i++){
        scanf("%d",&ele);
        if(ele > large){
            large = ele;
        }
    }
    printf("large is %d\t",large);
return 0;

}