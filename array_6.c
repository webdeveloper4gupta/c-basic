#include<stdio.h>
// max and min in array
    int main()
    {
      int a[10];
      int i,max=0,min=0;
      int n;
      printf("enter the number\n");
      scanf("%d",&n);
      for(i=0;i<n;i++){
          printf("enter the %d element \n",i+1);
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++){
          if(a[i]>max){
              max=a[i];
          }
          if (a[i]<min){
              min=a[i];
          }
        
      }
      if(n==i){
          printf("%d\n",max);
          printf("%d\n",min);

      }
      return 0;
    }