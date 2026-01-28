#include<stdio.h>
int main(){
    int at,bal,wd;
    scanf("%d %d %d",&at,&bal,&wd);
    switch(at){
        case 1:
           if(bal>wd){
            printf("Transaction successfully");
           }
           else if(bal<wd){
            printf("Insufficient amount");
           }
           break;
        case 2:
           if(5000<wd){
            printf("Limit Exceeded");
           }  
           else if(bal>wd){
            printf("Transaction succcessfully");
           }
           break;
    }
    return 0;
}