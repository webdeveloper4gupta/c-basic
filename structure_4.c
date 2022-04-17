#include<stdio.h>
struct books{
    int code;
    float price;
    char name[100];
};
void display(struct books *ptr,int n){
    int i;
    for(i=0;i<3;i++){
        printf("the code of %d books is %d\n",i+1,(*ptr).code);
        printf("the price of %d books is %f\n",i+1,(*ptr).price);
        printf("the name of %d books is %s\n",i+1,(*ptr).name);
        ptr++;
    }
}
int main()
{
    struct books b[10];
    int j;
    for(j=0;j<3;j++){
        printf("enter the code of %d book \n",j+1);
        scanf("%d",&b[j].code);
        printf("enter the price of %d book\n",j+1);
        scanf("%f",&b[j].price);
        printf("enter the name of %d book\n",j+1);
         scanf("%s",b[j].name);
    }
    display(b,3);
    return 0;
}