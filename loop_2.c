//write a program to print first 100 number in reverse order
// continue 
#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--){
        if(i%3==0){
            //continue;// it say to control that move out from if condition and print next line;
            break;
        }
        //printf("%d\n",i);
        printf("divisible of 3 present \n");
    }
    return 0;
}