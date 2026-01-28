#include<stdio.h>
int main(){
    int u,t;
    scanf("%d %d",&u,&t);
    switch(u){
        case 1:
          printf("Full Access");
          break;
        case 2:
           if(9>=t<=18){
            printf("Limited Access");
            break;
           }
           else {
            printf("Access Denied");
            break;
           }
           default:
            printf("Invalid User");
            break;
    }
    return 0 ;

}