#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} student_t;

student_t getStudent() {
    student_t s;
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter GPA: ");
    scanf("%f", &s.gpa);
    getchar(); // consume leftover newline

    return s;  
}

int main() {
    student_t alice = getStudent();
    printf("Student Name: %s, Age: %d, GPA: %.1f\n", alice.name, alice.age, alice.gpa);
    return 0;
}
