#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    printf("Initially:\n");
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    p1 = &b;
    p2 = &c;
    p3 = &a;

    *p1 += 50;
    *p2 -= 50;
    *p3 *= 2;

    printf("After first pointer operations:\n");
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    p1 = &c;
    p2 = &a;
    p3 = &b;

    *p1 += 10;
    *p2 -= 20;
    *p3 *= 3;

    printf("Final values after all pointer manipulations:\n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}
