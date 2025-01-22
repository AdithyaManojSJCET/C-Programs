#include <stdio.h>
int main(){
  char name[20];
  printf("\nEnter Your Name: ");
  fgets(name,sizeof(name),stdin);
  printf("Welcome %s",name);
  
  return 0;
}
