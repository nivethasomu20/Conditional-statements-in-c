#include<stdio.h>
int main(){
    int f,w;
    int tot,bill;
    scanf("%d %d",&f,&w);
    switch(f){
        case 1:
          tot=w*300;
          printf("Extra Baggage Charge %d",tot);
          break;
        case 2:
          if(w<=3){
            printf("Free");
            break;
          }  
          else if(w>3){
            tot = w-3;
            bill=tot*300;
            printf("Extra Baggage Charge %d",bill);
            break;
          }
        default:
         printf("Invalid flight");
         break;

    }
    return 0;

}