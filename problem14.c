#include<stdio.h>
int main(){
    int c,age;
    scanf("%d %d",&c,&age);
    switch(c){
        case 1:
         if(age<=5){
            printf("1500");
            break;
         }
         else if(age>5){
            printf("2500");
            break;
         }
        case 2:
         if(age<=5){
            printf("4000");
            break;
         }
         else if(age>5){
            printf("6000");
            break;
         }
        default:
         printf("Invalid category");
         break;
    }
    return 0;
}