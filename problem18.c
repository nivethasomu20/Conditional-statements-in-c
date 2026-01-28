#include<stdio.h>
int main(){
    int att,mark;
    scanf("%d %d",&att,&mark);
    switch(att){
        case 1:
          if(mark>=80){
            printf("Excellent");
            break;
          }
          else{
            printf("Not Qualified");
            break;
          }
        case 2:
         if(mark>=60){
            printf("Good");
            break;
         }
         else {
            printf("Not Qualified");
            break;
         }
        case 3:
           if(mark<=40){
            printf("Needs Improvement");
            break;
           }
        default:
         printf("Invalid attempt");
         break;
    }
    return 0;
}