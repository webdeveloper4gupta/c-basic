// SIMPLE CALCULATOR
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    int ch;
    printf("enter two number \n");
    scanf("%f%f",&a,&b);
    printf("enter your choice \n");
    scanf("%d",&ch);
     switch(ch)
     {
         case 1: printf("the addition of two number is \n");
                 c=a+b;
                 printf("the addition is %f\n",c);
                 break;
        case 2:
                c=(a-b);// abs is used to turn - to+ but only in case of integer data types
                printf("the subtraction of two number is %.2f\n",c);
                break;
        case 3:
              c=a*b;
              printf("the multiplication of two number is %f\n",c);
              break;
        case 4:
             c=a/b;
             printf("the division of two number is %f\n",c);
             break;
    
     }
     return 0;
}