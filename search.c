#include <stdio.h>
int main(){
  int n,search,i;
  printf("\nEnter the Limit of the Array: ");\
  scanf("%d",&n);
  int array[n];
  printf("\nEnter %d Elements: ",n);
  for (i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  printf("\nEnter the Element to be Searched: ");
  scanf("%d",&search);
  for (i=0;i<n;i++){
    if (search==array[i]){
      printf("The Element Is found at %d\n",i+1);
    }
  }
  
  return 0;
  }
