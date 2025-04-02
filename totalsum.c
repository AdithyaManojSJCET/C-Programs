#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
    float totalMarks;
    float averageMarks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks for three subjects:\n");
        float total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            total += students[i].marks[j];  
        }
        students[i].totalMarks = total;
        students[i].averageMarks = total / 3;
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Total Marks: %.2f\n", students[i].totalMarks);
        printf("Average Marks: %.2f\n", students[i].averageMarks);
    }

    return 0;
}

