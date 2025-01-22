#include <stdio.h>
int main(){
  char value='a';
  printf("\nEnter a Character in Capital letter: ");
  value=getchar();
  value=value+32;
  printf("Lower case letter: %c\n",value);
  
  return 0;
}
