/*Display even numbers from 1 to 10 using while loop ? */

#include<stdio.h>
int main (){
    int i=1;
        while(i<=10){ // 'i' value limit to 10 
            if(i % 2==0){ // condition to check even numbers
                printf("%d is even\n",i); // display the evne numbers
            }
        i++; // increment the i value 
    }
return 0;
}