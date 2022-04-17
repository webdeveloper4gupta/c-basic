#include<stdio.h>
 //conversion to fahrenheit to celcius ;
int main()
{
     float ca,fah;
     printf("enter the temperature in celcius\n");
     scanf("%f",&ca);
     printf("enter the temperature in fahrenheit\n");
     scanf("%f",&fah);
     //ca=(fah-32)*5/9;
      // fah=(ca*9/5)+32;
     printf("%f\n",(fah-32)*5/9);
      printf("the temperature in fah %f\n",(ca*9/5)+32);
      return 0;
     
}