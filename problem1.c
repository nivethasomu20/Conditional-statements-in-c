#include<stdio.h>
int main(){
    int c;
    int unit;
    int bill;
    scanf("%d %d",&c,&unit);
    switch(c){
        case 1:
        if(unit<100){
            unit = unit*3;
            printf("Bill %d",unit);
            break;
        }
        else if(unit>100){
            unit = (100*3)+((unit-100)*5);
            bill = unit - 80;
            printf("Bill %d",bill);
            break;
        }
        else if(unit>200){
            unit = (100*3)+((unit-100)*7);
            bill = unit - 80;
            printf("Bill %d",unit);
            break;
        }
        case 2:
        if(unit<=100){
            unit = (100*7);
            printf("Bill %d",unit);
        }
        else if(unit>100){
            unit = (100*7)+((unit-100)*10);
            printf("Bill %d",unit);
        }
          break;
    }
    return 0;
}