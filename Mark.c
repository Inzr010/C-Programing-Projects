#include <stdio.h>

int main() {

      float mark;

      printf("Enter your Marks: ");
      scanf("%f", &mark);

      if (mark >=100) {
      printf("You are fool");
      }else if (mark >= 50){
       printf("You passed");
      }else{
      printf("You are Failed");
      }
     
     return 0;
  }