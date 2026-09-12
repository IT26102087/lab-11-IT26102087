#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    int score;
} student_t;

int main() {
    student_t students[2];

    for (int i = 0; i < 2; i++) {
        printf("Student %d Name: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Score: ");
        scanf("%d", &students[i].score);
        getchar();
    }

    int best = 0;
    for (int i = 1; i < 2; i++) {
        if (students[i].score > students[best].score) best = i;
    }
    printf("%s (%d), Score: %d\n", students[best].name, students[best].id, students[best].score);
    return 0;
}
