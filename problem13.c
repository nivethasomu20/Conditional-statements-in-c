#include<stdio.h>
int main(){
    int l,c;
    scanf("%d %d",&l,&c);
    switch(l){
        case 1:
         if(c>=700){
            printf("Approved");
            break;
         }
         else if(650>=c<=699){
            printf("Manual Review");
            break;
         }
        case 2:
          if(c>=700){
            printf("Approved");
            break;
          } 
          else if(c<700){
            printf("Rejected");
            break;
          }
          default:
            printf("Invalid loantype");
            break;
        }
     return 0;
}