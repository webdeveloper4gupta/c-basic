#include<stdio.h>
//linear search
int main()
{
    int a[10];
    int n,m;
    int i,found=0;
    printf("enter the length of array\n");
    scanf("%d",&n);
     printf("enter the number\n");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        printf("enter the %d element \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==m){
            found++;
        }
      
        
    }
printf("the number present in %d times\n",found);
if(found==0){
    printf("not found\n");
}
return 0;
}