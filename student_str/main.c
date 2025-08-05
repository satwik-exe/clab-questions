#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char first_name[50];
    float grade;

};
typedef struct Student Student;
int main() {
    Student Student1;
    printf("Enter your id: \n");
    scanf(" %d", &Student1.id);
    printf("Enter your name: \n");
    scanf(" %s", Student1.first_name);
    printf("Enter your grade: \n");
    scanf(" %f" , &Student1.grade);

    printf("Student Information: \n");
    printf("ID- %d\n", Student1.id);
    printf("Name- %s\n" , Student1.first_name);
    printf("Grade- %f\n" , Student1.grade);


}



