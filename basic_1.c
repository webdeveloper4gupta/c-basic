#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,e,f,g;
    
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    e=abs(a-b);
    f=a*b;
    g=a/b;
    printf("%d\n",c);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    return 0;
}
