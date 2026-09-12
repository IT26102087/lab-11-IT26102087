#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    int ratings[5];  
} movie_t;

void printAverageRating(movie_t m) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += m.ratings[i];
    }
    float avg = sum / 5.0f;
    printf("Average Rating for %s: %.1f\n", m.title, avg);
}

int main() {
    movie_t movie;

    printf("Enter title: ");
    fgets(movie.title, sizeof(movie.title), stdin);
    movie.title[strcspn(movie.title, "\n")] = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter rating %d: ", i + 1);
        scanf("%d", &movie.ratings[i]);
    }

    printAverageRating(movie);
    return 0;
}
