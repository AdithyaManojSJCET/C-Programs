#include <stdio.h>
int main(){
  int number1,number2,number3;
  printf("\nEnter the First Number: ");
  scanf("%d",&number1);
  printf("\nEnter the Second Number: ");
  scanf("%d",&number2);
  printf("\nEnter the Third Number: ");
  scanf("%d",&number3);
  if (number1>number2){
    if (number1>number3){
      printf("%d is the largest",number1);
    }
    else{
      printf("%d is the largest",number3);
    }
  }
    
  else if (number2>number3){
    if (number2>number1){
      printf("%d is the largest",number2);
    }
    else{
      printf("%d is the largest",number1);}
    }
  
  else if(number3>number1){
    if(number3>number2){
      printf("%d is the largest",number3);
    }else{
      printf("%d is the largest",number2);
      }
  }
  
  else{
    printf("Numbers are equal");}
   
  
  return 0;
  }
