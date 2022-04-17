//count zero
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,c=0,d1=0,ch;
     printf("enter the 3X3 matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch){

    case 1:
    
            for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              if(a[i][j]==0){  
                c++;
               }
               }
               }
               printf("the total number of zero in matrix is %d",c);
               break;
    case 2:
             for(i=0;i<3;i++){
             for(j=0;j<3;j++){
               if( j<i){
                d1+=a[i][j]; 
            }
        }
    }
        printf("sum of element of above the diagonal %d\n",d1);
        break;
    case 3: for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i==j){
                    printf("the diaognal elemnets is %d\n",a[i][j]);
                }
            }
    }
    break;
    case 4: for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d\n",a[i][j]);
            }
    }
    break;
    case 5: for(j=0;j<3;j++){
         for(i=0;i<3;i++){
             printf("%d\n",a[i][j]);
         }
    }
     break;
   default: printf("enter the valid number\n");
     break;
    }
    return 0;
}