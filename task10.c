#include <stdio.h>
int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *p1 = &grid[0][0];
    int *p2 = &grid[1][0];

    printf("First element using p1: %d\n", *p1);
    printf("Element at (p1 + 5): %d\n", *(p1 + 5));
    printf("Element at (p2 - 2): %d\n", *(p2 - 2));

    printf("Elements divisible by 3: ");
    for (int *ptr = &grid[0][0]; ptr <= &grid[2][3]; ptr++) {
        if (*ptr % 3 == 0)
            printf("%d ", *ptr);
    }
    printf("\n");

    int last = grid[2][3];
    printf("Last element using Method 1: %d\n", last);

    return 0;
}
