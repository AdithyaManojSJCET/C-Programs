#include <stdio.h>
#define MAX 10
typedef struct{
  int rollno;
  char name[20];
  int m[3];
  int totalMarks;
}Student;

void Read(Student s[], int n){
  for(int i=0;i<n;i++){
    printf("\nEnter the roll no: ");
    scanf("%d",&s[i].rollno);
    printf("\nEnter the name: ");
    scanf("%s",s[i].name);
    printf("\nEnter the Marks: ");
    scanf("%d%d%d",&s[i].m[0],&s[i].m[1],&s[i].m[2]);
  }
}

void calculateTotal(Student s[],int n){
  for(int i=0;i<n;i++){
    s[i].totalMarks=s[i].m[0]+s[i].m[1]+s[i].m[2];
  }
}

void ranklist(Student s[] ,int n){
  Student temp;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(s[j].totalMarks<s[j+1].totalMarks);
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
    }
  }
}

void printRanklist(Student s[],int n){
  printf("\nRank \tRoll No\tName\tTotal Marks\n");
  for(int i=0;i<n;i++){
    printf("%d\t %d\t %s\t %d\n",i+1,s[i].rollno,s[i].name,s[i].totalMarks);
  }
}

int main(){
  Student s[MAX];
  int n;
  printf("\nEnter the Number of students(Max:10): ");
  scanf("%d",&n);
  Read(s,n);
  ranklist(s,n);
  printRanklist(s,n);
  return 0;
}
