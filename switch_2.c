// area of triangle whose two sides are given and circle,rectangle,square;
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float l,b,h,r,side, d;
      int ch;
   
    printf("enter the length and breadth\n");
    scanf("%f%f",&l,&b);
    printf("enter theheight\n");
     scanf("%f",&h);
    printf("enter the radius\n");
     scanf("%f",&r);
    printf("enter the side\n");
   scanf("%f",&side);
  printf("enter the option\n");
   scanf("%d",&ch);
    //printf("enter the option\n");
  // scanf("%c",&ch);

   switch(ch)
   {
       case 1 : d=l*b;
                printf("the area of rectangle is %f\n",d);
                break;
       case 2: d=3.14*r*r;
                printf("the area of circle is %f\n",d);
                break;
       case 3: d=0.5*b*h;
                printf("the area of triangle is %f\n",d);
                break;
      case 4: d=side*side;
                printf("the area of square is %f\n",d);
                break;
       default :  printf("enter the valid choice for finding area\n");
                 break;
   }   
   return 0;
}