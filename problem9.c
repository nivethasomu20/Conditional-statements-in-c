#include<stdio.h>
int main(){
    int r;
    char ch;
    scanf("%d",&r);
    scanf("%c",&ch);
    switch(r){
        case 1:
          if(ch='A'){
            printf("2500");
            break;
          }
          else if(ch='B'){
            printf("2000");
            break;
          }
          else{
            printf("Invalid season");
            break;
          }
        case 2:
          if(ch='C'){
            printf("4000");
            break;
          }
          else if(ch='D'){
            printf("3000");
            break;
          }
          else{
            printf("Invalid season");
            break;
          }
    }
    return 0;
}