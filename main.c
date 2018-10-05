#include <stdio.h>

void hoandoi2so(int *conTroCuaC, int *conTroCuaD){
    // lấy giá trị tại địa chỉ vùng nhớ conTroCuaC trỏ tới.
    // gán cho bientam kiểu số nguyên.
    int bientam = *conTroCuaC;
    *conTroCuaC = *conTroCuaD;
    *conTroCuaD = bientam;
    printf("Sau khi hoán đổi, tại hàm hoandoi2so\n");
    printf("Giá trị tại vùng nhớ của con trỏ C la %d\n", *conTroCuaC);
    printf("Giá trị tại vùng nhớ của con trỏ D la %d\n", *conTroCuaD);
}

int main() {
    int *conTroCuaC;
    int *conTroCuaD;
    int c = 20;
    int d = 30;
    conTroCuaC = &c;
    conTroCuaD = &d;
    printf("Số thứ nhất là %d\n", c);
    printf("Số thứ hai là %d\n", d);

    hoandoi2so(conTroCuaC, conTroCuaD);
    printf("Giá trị của hai số C và D tại hàm main\n");
    printf("Giá trị số thứ nhất sau khi hoán đổi: %d\n", c);
    printf("Giá trị số thứ hai sau khi hoán đổi: %d\n", d);
    return 0;
}