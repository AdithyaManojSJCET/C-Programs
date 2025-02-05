#include <stdio.h>
int main(){
  int n;
  printf("\nEnter the no of elements:");
  scanf("%d",&n);
  int numbers[n];
  printf("\nEnter %d elements:",n);
  for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
  }
  for(int i=0;i<n;i++){ 
    for(int j=0;j<n-1;j++){ 
      if(numbers[j]>numbers[j+1]){
        int temp=numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=temp;
      }
    }
  }
  printf("\n The sorted array:\t");
  for(int i=0;i<n;i++){
    printf("%d\t",numbers[i]);
  }
  return 0;
  }
