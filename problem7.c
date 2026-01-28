#include<stdio.h>
int main(){
    int acc,year;
    int interest;
    scanf("%d %d",&acc,&year);
    switch(acc){
        case 1:
         interest = 4;
         printf("Interest %d",interest);
         break;
        case 2:
         if(year<=3){
            interest = 5;
            printf("Interest %d",interest);
            break;
         } 
         else if(year>3){
            interest = 7;
            printf("Interest %d",interest);
            break;
         }
    }
    return 0;
}