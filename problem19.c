#include<stdio.h>
int main(){
    int c,d;
    scanf("%d %d",&c,&d);
    switch(c){
        case 1:
         if(d<=30){
            printf("Eligible");
            break;
         }
         else if(d>30){
            printf("Eligible With Extre Fee");
            break;
         }
        case 2:
         if(d<=30){
            printf("Eligible");
            break;
         }
         else{
            printf("Not Eligible");
            break;
         }
         default:
          printf("Invalid category");
          break;
    }
    return 0;
}