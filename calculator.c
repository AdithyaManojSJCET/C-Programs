#include <stdio.h>
int main(){
  int num1,num2;
  char operator;
  printf("\nEnter the First Number: ");
  scanf("%d",&num1);
  printf("\nEnter The Second Number: ");
  scanf("%d",&num2);
  printf("\nEnter The Operator:");
  scanf(" %c",&operator);
  switch(operator){
    case '+': printf("Sum= %d",num1 + num2);
      break;
    case '-': printf("Difference= %d",num1 - num2);
      break;
    case '*': printf("Product= %d",num1 * num2);
      break;
    case '/': printf("Quotient= %d",num1 / num2);
      break;
    case '%': printf("Reminder= %d",num1 % num2);
      break;
      
  }
  return 0;
  
  }
