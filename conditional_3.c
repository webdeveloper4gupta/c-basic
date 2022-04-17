//largest in between four numbers
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(d>b&&d>c&&d>a){
        printf("d is greatest \n");
    }
   else  if(a>b&&a>c&&a>d){
        printf("a is greatest \n");
    }
    else if(b>a&&b>c&&b>d){
        printf("bis greatest \n");
    }
   else if(c>b&&c>a&&c>d){
        printf("c is greatest \n");
    }
    return 0;
}