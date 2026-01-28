#include<stdio.h>
int main(){
    int p;
    char s[100];
    int pay;
    scanf("%d",&p);
    scanf("%s",&s);
    switch(p){
        case 1:
        pay = 199;
         if(s[11] || s[12]){
            pay = 199-20;
            printf("Pay %d",pay);
            break;
         }
        else{
            printf("Pay %d",pay);
            break;
        }
        case 2:
        pay =399;
        if(s[11] || s[12]){
            pay = 399-20;
            printf("Pay %d",pay);
            break;
         }
        else{
            printf("Pay %d",pay);
            break;
          } 
    }
    return 0 ;
}