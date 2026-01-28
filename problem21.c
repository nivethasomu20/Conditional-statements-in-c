#include<stdio.h>
int main(){
    int s,t;
    int silver,gold;
    scanf("%d %d",&s,&t);
    switch(s){
        case 1:
        silver = 150;
         if(t<18){
            printf("Ticket Price %d",silver);
            break;
         }
        else if(t>=18){
          silver = silver+50;
          printf("Ticket Price %d",silver);
          break;
         }
        case 2:
        gold = 250;
        if(t<18){
            printf("Ticket Price %d",gold);
            break;
        }
        else if(t>=18){
            gold = gold+50;
            printf("Ticket Price %d",gold);
            break;
        }
        default:
         printf("Invalid Seat");
         break;
    }
    return 0;
}