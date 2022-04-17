#include<stdio.h>
#include<math.h>
// find the root of quadratic equation
int main()
{
    int a,b,c;
    float r1,r2,r,i;
    int d;
    printf("enter the value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d>0){
        printf("roots are real\n");
        r1=((-b)+(sqrt(d)))/(2*a);
        r2=((-b)-(sqrt(d)))/(2*a);
        printf("the root 1 is %f and root 2 is %f\n",r1,r2);
    }
    else if(d==0){
        printf("roots are equal\n");
        r1=(-b)/(2*a);
        r2=r1;
        printf("the root 1 is %f nd %f\n",r1,r2);
    }
    else{
        printf("roots are imaginary\n");
        r=(-1)/(2*a);
        d=-d;
        i=(sqrt(d))/(2*a);
        printf("the  real root  is %f+i %f\n",r,i);
       printf("the  real root  is %f-i %f\n",r,i);
    }
    return 0;
}