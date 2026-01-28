#include<stdio.h>
int main(){
    int m;
    char ch;
    scanf("%d",&m);
    scanf("%c",&ch);
    switch(m){
        case 1:
          if(ch='R'){
            printf("5000");
            break;
          }
          else if(ch='S'){
            printf("3000");
            break;
          }
        case 2:
           if(ch='R'){
            printf("9000");
            break;
          }
          else if(ch='S'){
            printf("7000");
            break;
          }
          default:
           printf("Invalid mode");
           break;
    }
    return 0;
}