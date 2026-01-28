#include<stdio.h>
int main(){
    int v,t;
    int amt = 0;
    scanf("%d %d",&v,&t);
    switch(v){
        case 1:
          if(t==1){
            amt = 100;
            printf("%d",amt);
            break;
          }
          else if(2>=t<=10 || t>10){
            amt=800;
            printf("%d",amt);
            break;
          }
        case 2:
           amt = t*240;
           printf("%d",amt);
           break;
    }
    return 0;
}