#include <stdio.h>
int main(){
  int n,largest,smallest,i;
  printf("\nEnter the Limit of the Array: ");
  scanf("%d",&n);
  int array[n];
  printf("\nEnter %d Elements: ",n);
  for (i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  largest=array[0];
  smallest=array[0];
  for (i=0;i<n;i++){
    if (array[i]<largest){
        largest=array[i];
    }
    if (array[i]>smallest){
        smallest=array[i];
    }
  }
  printf("\nLargest Number from the array is =%d",largest);
  printf("\nSmallest Number from the array is =%d\n",smallest);
  
  return 0;
  }
