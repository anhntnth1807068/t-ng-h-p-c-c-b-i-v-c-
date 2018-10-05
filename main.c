#include <stdio.h>

void sayHello() {
    printf("Hello");
}

// khai báo và định nghĩa hàm.
int congHaiSo(int x, int y) {
    return x + y;
}

int truHaiSo(int x, int y) {
    return x - y;
}


int main() {
    int a, b, ketqua, luachon;
    printf("Vui lòng nhập số thứ nhất: ");
    scanf("%d", &a);
    printf("Vui lòng nhập số thứ hai: ");
    scanf("%d", &b);

    printf("Lựa chọn phép tính: \n");
    printf("1. Phép cộng. \n");
    printf("2. Phép trừ. \n");
    printf("Nhập lựa chọn của bạn (1|2): \n");
    scanf("%d", &luachon);
    //
    if (luachon == 1) {
        printf("Tổng hai số là: ");
        ketqua = congHaiSo(a, b);
    } else if (luachon == 2) {
        printf("Hiệu hai số là: ");
        ketqua = truHaiSo(a, b);
    } else {
        printf("Lựa chọn sai.");
    }

    printf("%d", ketqua);
    return 0;
}