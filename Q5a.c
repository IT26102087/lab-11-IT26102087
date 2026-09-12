#include <stdio.h>
#include <string.h>

int main() {
    char names[2][50];
    int ids[2];
    int scores[2];

    for (int i = 0; i < 2; i++) {
        printf("Student %d Name: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;

        printf("ID: ");
        scanf("%d", &ids[i]);
        printf("Score: ");
        scanf("%d", &scores[i]);
        getchar();
    }

    // Find highest score
    int best = 0;
    for (int i = 1; i < 2; i++) {
        if (scores[i] > scores[best]) best = i;
    }
    printf("%s (%d), Score: %d\n", names[best], ids[best], scores[best]);
    return 0;
}
