#include<stdio.h>
int main(){
    int c,a;
    float fare;
    scanf("%d %d",&c,&a);
    switch(c){
    case 1:
       if(a<12){
        fare =300-((50*fare)/100);
        printf("Fare %.f",fare);
        break;
       }
       else if(a>=60){
        fare =300-((33*fare)/100);
        printf("Fare %.f",fare);
        break;
       }
    case 2:
       if(a<12){
        fare =1000-((50*fare)/100);
        printf("Fare %.f",fare);
        break;
       }
    }
    return 0;
}