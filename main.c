#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char masinhvien[10];
    char tensinhvien[50];
    char sdtsinhvien[50];

} Sinhvien;

void themmoisinhvien(int *p, Sinhvien *danhSachsinhvien) {
    char a[10];
    for (int j = 0; j < 10; ++j) {
        printf("Nhập tên sinh viên thứ %d:", *p + 1);
        scanf("%s",danhSachsinhvien[*p].tensinhvien);
        while (1) {
            printf("Nhập mã sinh viên thứ %d:", *p + 1);
            scanf("%s",danhSachsinhvien[*p].masinhvien);
            if (strlen(danhSachsinhvien[*p].masinhvien) < 5) {
                printf("Yêu cầu mã sinh viên phải đủ 5 kí tự!!!Vui lòng nhập lại sinh viên thứ %d.\n", *p + 1);
            } else break;
        }
        printf("Nhập số điện thoại sinh viên thứ %d:\n", *p + 1);
        fgetc(stdin);
        scanf("%[0-9]",danhSachsinhvien[*p].sdtsinhvien);
        *p+=1;
        printf("Nhập exit để dừng hoặc ấn Enter để tiếp tục.");
        fgetc(stdin);
        fgets(a, 10, stdin);
        if (strcmp(a, "exit\n") == 0)break;
        if(*p==10){
            printf("Danh sách sinh viên đã đầy");
            break;
        }
    }

}

void hienSV(Sinhvien danhSachSV[]) {
    int i=0;
    printf("-%-25s|%-25s|%s", "Mã sinh viên", "Tên sinh viên", "Điện thoại");
    for (int j = 0; j < 10; ++j) {
        printf("\n-%-23s|%-23s|%s", danhSachSV[i].masinhvien, danhSachSV[i].tensinhvien, danhSachSV[i].sdtsinhvien);
        i++;
    }
}

void in(Sinhvien danhSachSV[]) {
    int i=0;
    FILE *f=fopen("danhsachsinhvien.txt","w");
    fprintf(f,"-%-20s|%-20s|%s", "Mã sinh viên", "Tên sinh viên", "Điện thoại");
    for (int j = 0; j < 10; ++j) {
        fprintf(f,"\n-%-18s|%-18s|%s", danhSachSV[i].masinhvien, danhSachSV[i].tensinhvien, danhSachSV[i].sdtsinhvien);
        i++;
    }
    fclose(f);
}
void doc(){
    FILE *f=fopen("danhsachsinhvien.txt","r");
    printf("Đọc dữ liệu từ file\n");
    char buffer[255];
    while (fgets(buffer, 255, f) != NULL){
        printf("%s", buffer);
    }
    fclose(f);
}
int main() {
    int ch;
    int i=0;
    int *p;
    p=&i;
    Sinhvien danhSachSV[10]={};
    printf("------------Menu-------------\n");
    printf("1. Thêm mới sinh viên. \n");
    printf("2. Hiển thị danh sách sinh viên.\n");
    printf("3. Lưu danh sách sinh viên ra file.\n");
    printf("4. Đọc danh sách sinh viên từ file.\n");
    printf("5. Thoát chương trình.\n");

    while (1) {
        printf("\nLựa chọn:");
        scanf("%d", &ch);
        fgetc(stdin);
        switch (ch) {
            case 1:
                if(*p==10){
                    printf("Danh sách sinh viên đã đầy!!!");
                    break;
                }
                printf("Bắt đầu thêm sinh viên.\n");
                themmoisinhvien(p, danhSachSV);
                break;
            case 2:
                printf("Đây là danh sách sinh viên.\n");
                hienSV(danhSachSV);
                break;
            case 3:
                in(danhSachSV);
                printf("Đã lưa thông tin sinh viên vào file danhsachsinhvien.txt.\n");
                break;
            case 4:doc();
                break;

        }
        if (ch == 5){
            printf("Đóng chương trình.\n");
            break;
        }

    }

    return 0;
}