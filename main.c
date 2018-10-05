#include <stdio.h>
#include <stdlib.h>

int conghaiso(int a, int b) {
    return a + b;
}

int truhaiso(int a, int b) {
    return a - b;
}

int main() {
    int *ap;
    *ap = 1;
    ap++;
    *ap = 2;
    ap++;
    *ap = 3;
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *ap);
        ap--;
    }
    ap++;
    printf("%d\n", *ap);
    ap++;
    printf("%d\n", *ap);
    return 0;
}