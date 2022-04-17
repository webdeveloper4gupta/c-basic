//factorial of given number
#include<stdio.h>
int fact(int n);
int main()
{
    int n=5,c;
   c= fact(n);
   printf("%d\n",c);
    return 0;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}