#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void noiHoVaTen(char ho[], char ten[]) {
    printf("Do dai cua ho la: %d\n", strlen(ho));
    printf("Do dai cua ten la: %d\n", strlen(ten));
    int dodaiHo = strlen(ho);
    int dodaiTen = strlen(ten);
    int tong = dodaiHo + dodaiTen;
    printf("Do dai cua ca ho va ten la %d\n", tong);
    tong++;
    char hovaten[tong];
    strcpy(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("%s", hovaten);
}

int main() {
    char ho[10], ten[10];
    printf("Vui long nhap ho cua ban: ");
    fgets(ho, 10, stdin); // gets
    puts(ho);
    if (!strchr(ho, '\n')) {
        while (fgetc(stdin) != '\n');
    }
    printf("Vui long nhap ten cua ban: ");
    fgets(ten, 10, stdin);
    puts(ten);
    noiHoVaTen(ho, ten);
    return 0;
}