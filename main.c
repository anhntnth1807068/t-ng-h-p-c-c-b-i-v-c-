#include <stdio.h>

int conghaiso(int a, int b) {
    return a + b;
}

int main() {
    int a = 10;
    int *controA; // khai báo biến con trỏ kiểu int - bắt đầu bằng dấu *
    controA = &a; // trỏ con trỏ controA đến vị trí bộ nhớ của biến a;
    printf("Giá trị của a là %d\n", a);// in ra giá trị của a.
    printf("Giá trị của a là %d\n", &a);// in ra địa chỉ bộ nhớ của a.
    printf("Giá trị địa chỉ bộ nhớ con trỏ trỏ tới %d\n",
           *controA);// in ra giá trị mà địa chỉ con trỏ đang trỏ tới chứa.
    printf("Địa chỉ bộ nhớ mà controA trỏ tới %d\n", controA);
    *controA = 20; // Thay đổi giá trị mà controA trỏ tới.
    printf("Giá trị của a là %d\n", a);// in ra giá trị của a.
    int b = 30; // tạo biến b có giá trị = 30;
    controA = &b;
    printf("Giá trị địa chỉ bộ nhớ con trỏ trỏ tới %d\n",
           *controA);// in ra giá trị mà địa chỉ con trỏ đang trỏ tới chứa.
    *controA = 50;
    printf("Giá trị của b là %d", b); // in ra gía trị của b.
    return 0;
}
