#include<stdio.h>
int main()
{
  int a[10];
  int i;
  for(i=0;i<5;i++){
      printf("enter the %d element of array \n",i+1);
      scanf("%d",&a[i]);
  }
  for(i=4;i>=0;i--){
      printf("the reverse is %d\n",a[i]);
  }
  return 0;
}