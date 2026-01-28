#include<stdio.h>
int main(){
    int amt,spd;
    int del;
    scanf("%d %d",&amt,&spd);
    switch(spd){
        case 1:
         del = 50;
         printf("Delivery %d",del);
         break;
        case 2:
         if(amt<1000){
            del = 100;
            printf("Delivery %d",del);
            break;
         }
         else if(amt>=1000){
            printf("Delivery Free");
            break;
         }
    }
    return 0;

}