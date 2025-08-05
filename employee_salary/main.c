#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char first_name[50];
    int hrs_worked;
    float hrly_rt;




};
typedef struct Employee Employee;
int main() {
    int salary;
    Employee Employee1;
    printf("Enter your id: \n");
    scanf(" %d", &Employee1.id);
    printf("Enter your name: \n");
    scanf(" %s", Employee1.first_name);
    printf("Enter your hours worked: \n");
    scanf(" %d", &Employee1.hrs_worked);
    printf("Enter your hourly rate: \n");
    scanf("%f", &Employee1.hrly_rt);

salary= Employee1.hrs_worked*Employee1.hrly_rt;

    printf("Employee Information: \n");
    printf("ID: %d\n",Employee1.id);
    printf("First Name: %s\n", Employee1.first_name);
    printf("Hours worked: %d\n", Employee1.hrs_worked);
    printf("Hourly rate: %f\n", Employee1.hrly_rt);
    printf("Total salary: %d", salary);
}





