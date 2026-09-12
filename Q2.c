#include <stdio.h>

typedef struct {
    int width;
    int height;
} rectangle_t;

// Takes a POINTER so it can modify the original struct
void updateRectangle(rectangle_t *r) {
    printf("Enter width: ");
    scanf("%d", &r->width);   // -> is used to access members through a pointer
    printf("Enter height: ");
    scanf("%d", &r->height);
}

int main() {
    rectangle_t rect;
    updateRectangle(&rect);   // pass address
    printf("Updated Rectangle - Width: %d, Height: %d\n", rect.width, rect.height);
    return 0;
}
