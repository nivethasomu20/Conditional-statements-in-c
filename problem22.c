#include<stdio.h>
int main(){
    int c,unit;
    int bill;
    scanf("%d %d",&c,&unit);
    switch(c){
        case 1:
         if(unit<=30){
           bill = unit*5;
           printf("Bill %d",bill);
           break;
         }
         else if(unit>30){
            bill=unit*8;
            printf("Bill %d",bill);
            break;
         }
        case 2:
          bill = unit*10;
          printf("Bill %d",bill);
          break;
        default:
         printf("Invalid connection");
         break;
    }
    return 0;
}