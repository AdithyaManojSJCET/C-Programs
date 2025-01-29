#include <stdio.h>
int main(){
  int number,fact=1,num;
  printf("\nEnter the Number: ");
  scanf("%d",&number);
  num=number;
  while (number>0){
    fact=fact*number;
    number=number-1;
  }
  printf("the factorial of %d is %d",num,fact);
  
  
  return 0;
  }
