#include <stdio.h>
#include <stdlib.h>

int conghaiso(int a, int b) {
    return a + b;
}

int truhaiso(int a, int b) {
    return a - b;
}

int main() {
    int *pointToArray = (int *) malloc(3 * sizeof(int));
    if (pointToArray == NULL) {
        printf("Not enough memory.");
        return 0;
    }
    *pointToArray = 10;
    pointToArray++;
    *pointToArray = 20;
    pointToArray++;
    *pointToArray = 30;
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *pointToArray);
        pointToArray--;
    }
    return 0;
}
