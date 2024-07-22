#include<stdio.h>

int main() {
    // Example 1
    int x = 5, y = 10, z;
    z = (++x) + (y++) + (x++);
    printf("z = %d\n", z);

    // Example 2
    int a = 1, b = 2, c = 3, result;
    result = (a++) + (++b) + (c++) + (++a);
    printf("result = %d\n", result);

    // Example 3
    int m = 4, n = 5, p;
    p = (m++) + (++n) + (++n) + (m++);
    printf("p = %d\n", p);

    return 0;
}
