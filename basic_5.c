#include<stdio.h>
// conversion of meter to kilometer and meter
int main()
{
    int m1,k,m2,t;
    printf("enter the distance in meter\n");
    scanf("%d",&m1);
    k=m1/1000;
    t=m1%1000;
    m2=t;
    printf("the distance in kilometer %d and meter is %d\n",k,m2);
    return 0;
}