#include <stdio.h>

int conghaiso(int a, int b) {
    return a + b;
}

int truhaiso(int a, int b) {
    return a - b;
}

int main() {
    int (*conTroHam)(int a, int b);
    printf("Vui lòng lựa chọn phép tính:\n");
    printf("1. Phép cộng:\n");
    printf("1. Phép trừ:\n");
    printf("Nhập lựa chọn của bạn (1|2):\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            // do do.
            conTroHam = &conghaiso;
            break;
        case 2:
            // do something.
            conTroHam = &truhaiso;
            break;
    }
    printf("Kết quả %d\n", conTroHam(49, 59));
    return 0;
}