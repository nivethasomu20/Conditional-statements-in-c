#include<stdio.h>
int main(){
    int p;
    float d;
    scanf("%d",&p);
    scanf("%f",&d);
    switch(p){
       case 1:
          if(d<=1){
            printf("Normal Speed");
            break;
          }
          else if(d>1){
            printf("Speed Reduced");
            break;
          }
        case 2:
           if(d<=2){
            printf("Normal Speed");
            break;
           }
           else if(d>2){
            printf("Exter Charges Applied");
            break;
           }
           default:
            printf("Invalid plan");
            break;
        }
    return 0;
}