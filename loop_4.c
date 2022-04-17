//SUM OF FIRST N NUMBERS;
#include<stdio.h>
int main()
    {
       int n,sum=0,h;
       printf("enter the number upto which you required sum of digits\n");
       scanf("%d",&n);
       for(int i=1;i<=n;i++){
           sum=sum+i;
       }
       printf("the sum of first %d number is %d\n",n,sum);
       return 0;
    }
