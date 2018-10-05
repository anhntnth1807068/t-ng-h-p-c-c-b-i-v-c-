#include <stdio.h>

int conghaiso(int a, int b) {
    return a + b;
}

int main() {
    int arrayNumber[3];
    arrayNumber[0] = 6;
    arrayNumber[1] = 4;
    arrayNumber[2] = 7;

    int *myPointer;
    //myPointer = &arrayNumber[0];
    myPointer = arrayNumber;
    printf("arrayNumber[0]: %d\n", arrayNumber[0]);
    printf("Giá trị contrỏ trỏ tới: %d\n", *myPointer);
    myPointer++;
    printf("Giá trị contrỏ trỏ tới: %d\n", *myPointer);
    myPointer--;
    printf("Giá trị contrỏ trỏ tới: %d\n", *myPointer);
    // arrayNumber[2] = 70;
    myPointer++;
    myPointer++;
    *myPointer = 70;
    printf("arrayNumber[2]: %d\n", arrayNumber[2]);


    // Nhập giá trị cho mảng.
    myPointer = arrayNumber;
    for (int j = 0; j < 3; ++j) {
        printf("Vui lòng nhập giá trị cho phần tử thứ %d", j + 1);
        //scanf("%d", &arrayNumber[j]); // làm việc thông qua index.
        scanf("%d", myPointer);
        myPointer++;
    }

    myPointer = arrayNumber;
    for (int i = 0; i < 3; ++i) {
        printf("Giá trị của mảng tại phần tử thứ %d là %d\n", i + 1, arrayNumber[i]);// làm việc mảng thông qua inde
        printf("Giá trị con trỏ là: %d\n", *myPointer); // làm việc thông qua con trỏ.
        myPointer++;
    }
    return 0;
}