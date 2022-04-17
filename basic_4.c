#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//area f triangle whose all sides are given
int main()
{
    int a=5,b=8,c=9,area,s;
    s=(a+b+c)/2;
    area =sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("the areA OF TRIANGLE IS %d\n",area);
    return 0;
    
}  