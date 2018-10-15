#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main(){
    char name[10];
    printf("vui long nhap ten:\n");
    fgets(name,sizeof(name)*sizeof(char),stdin);
    printf("ten vua nhap la:");
    puts(name);
    return 0;

}