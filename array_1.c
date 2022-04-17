//SUM OF FIRST N NUMBERS BY USING ARRAYS:
#include<stdio.h>
int main()
{
  int a[10],sum=0;
  int i;
  for( i=0;i<10;i++){
      printf("enter the %d number\n",i+1);
      scanf("%d",&a[i]);
  }
  for( i=0;i<10;i++){
      sum=sum+a[i];
      
  }
  printf("the sum of elemt of array is %d\n",sum);
  return 0;
}