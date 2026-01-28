#include<stdio.h>
int main(){
    int mark,att;
    scanf("%d %d",&mark,&att);
    if(att>75 && mark>=75){
        printf("Distinction");
    }
    else if(att>75 && 50>=mark<=74){
        printf("Pass");
    }
    else if(att<75 && mark<50){
        printf("Fail");
    }
    return 0;
}