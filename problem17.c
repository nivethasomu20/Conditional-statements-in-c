#include<stdio.h>
int main(){
    int v,h;
    int bill;
    scanf("%d %d",&v,&h);
    switch(v){
        case 1:
        bill = (h*10);
        printf("Parking Fee %d",bill);
        break;
        case 2:
        bill = (h*20);
        printf("Parking Fee %d",bill);
        break;
    default:
      bill = h*20;
      printf("Parking Fee %d",bill);
      break;
}
return 0;
}