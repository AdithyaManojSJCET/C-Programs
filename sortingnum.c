#include<stdio.h>
void readFile(FILE *fp){
  int num;
  while(fscanf(fp,"%d",&num)==1){
    printf("%d\t",num);
  }
}

int main(){
  FILE *fp1,*fp2,*fp3;
  fp1=fopen("numbers.txt","r");
  fp2=fopen("odd.txt","w");
  fp3=fopen("even.txt","w");
  int num;
  fscanf(fp1,"%d",&num);
  while(fscanf(fp1,"%d",&num)==1){
    if(num%2==0){
      fprintf(fp3,"%d\t",num);//For Even number
    }else{
      fprintf(fp2,"%d\t",num);//For Odd numbers
    }
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  
  printf("\nThe text input Contents: ");
  fp1=fopen("numbers.txt","r");
  readFile(fp1);
  
  printf("\nThe Odd Number File contents: ");
  fp2=fopen("odd.txt","r");
  readFile(fp2);
  
  printf("\nThe Even Number File Contents: ");
  fp3=fopen("even.txt","r");
  readFile(fp3);
  
  return 0;
}
