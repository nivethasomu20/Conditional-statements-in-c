#include<stdio.h>
int main(){
    int c,exe;
    int tot;
    scanf("%d %d",&c,&exe);
    switch(c){
        case 1:
          if(exe>=3){
            tot=(exe*5000)+50000;
            printf("Salary %d",tot);
            break;
          }
        case 2:
           if(exe>=3){
            tot=(exe*5000)+35000;
            printf("Salary %d",tot);
            break;
           }
    }
    return 0;
}