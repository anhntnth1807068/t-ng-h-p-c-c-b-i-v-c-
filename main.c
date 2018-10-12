#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool chieudaicanhhuyen(int a,int b){
    if(a<=0 || b <= 0){
        printf("chieu dai cua  hai canh khong duoc bang khong");
        return false;
    }
    return true;
}
float tinhcanhhuyen(int a,int b){
    return (float)sqrt(pow(a,2) +pow(b,2));
}
int main(){
    int a;
    int b;
    printf("vui long nhap canh thu nhat\n");
    scanf("%d",&a);
    printf("vui long nhap canh thu hai\n");
    scanf("%d",&b);
    bool kt=chieudaicanhhuyen(a,b);
    if(kt==true){
        printf("canh huyen cua tam giac %.2f",tinhcanhhuyen(a,b));
    }
    return 0;
}
