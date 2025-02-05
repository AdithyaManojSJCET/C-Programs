#include <stdio.h>
int main(){
  int n,largest,smallest,i,lp,sp;
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
        lp=i+1;
    }
    if (array[i]>smallest){
        smallest=array[i];
        sp=i+1;
    }
  }
  printf("\nLargest Number is =%d at %d postion",largest,lp);
  printf("\nSmallest Number is =%d at %d postion\n",smallest,sp);
  
  return 0;
  }
