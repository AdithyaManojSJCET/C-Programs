#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  int wordCount=0,words=0,lines=0,character=0;
  fp=fopen("text.txt","r");
  while(fscanf(fp,"%c",&ch)==1){
    character++;
    if(ch=='\n'){
      lines++;
    } 
    if(ch==' '||ch=='.'){
      wordCount++;
    }
  }
  printf("Number of Words = %d\n",wordCount);
  printf("Number of Characters: %d\n",character);
  printf("Number of lines: %d\n",lines);
  fclose(fp);
  return 0;
  }
