#include<stdio.h>
// prime number in the array
int main()
{
    int a[10];
    int i,n,j;
    
    for(i=0;i<5;i++){
        printf("enter the %d element \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      n=a[i];
      for( j=2;j<n;j++){
          if(n%j==0){
              break;
          }
      }
      if(n==j){
          printf("%d\n",n);
      }
    }
   
    return 0;
}