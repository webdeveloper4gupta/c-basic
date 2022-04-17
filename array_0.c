#include<stdio.h>
int main()
    {
       int a[100];
       int temp;
       int i;
       int end=3;
       int start=0;
       for(i=0;i<4;i++){
       printf("enter the %d element\n ",i+1);
       scanf("%d",&a[i]);
    }
   while(start<end){
       // temp=a[start];
        a[start]=a[end];
      //  a[end]=temp;
      
       
        
        end--;
        start++;

    }
    for(i=0;i<4;i++){
        printf("%d\n",a[i]);
    }
    return 0;
    }
