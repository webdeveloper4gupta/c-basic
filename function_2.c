#include<stdio.h>
//force of attraction
int force(float mass){
    float force;
    force=mass*9.8;
    printf("the force apllied on %.fkg mass is %.1f newton\n", mass,force);
}
int main()
{
   float weight;
    printf("enter the weight \n");
    scanf("%f",&weight);
    force(weight);

    printf("this the force of gravitation\n");
    return 0;
}