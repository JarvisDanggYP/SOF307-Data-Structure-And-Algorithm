#include <stdio.h>

/*
 * Con trỏ:
 * Bộ nhớ RAM chứa rất nhiều ô nhớ, mỗi ô nhớ có kích thước  1 Byte
 * Mỗi ô nhớ có 1 địa chỉ duy nhất đánh dấu từ số 0
 * Địa chỉ của value được lữu trữ ở hệ thập lục phân
 * Con trỏ trong lập trình C:
 * - Địa chỉ của 1 biến là: 1 con số
 * Công thức dùng:
 * <kiểu dữ liệu> * <tên con trỏ>
 *- Con trỏ không có kiểu dữ liệu , con trỏ trỏ đến địa chỉ,địa chỉ lại ko có kiểu dữ liệu
 *- Đặt địa chỉ của biến vào con trỏ --> sd toán tử &
 *      <tên con trỏ> =&<tên biến>
 *- Trỏ đến địa chỉ đó để lấy giá trị địa chỉ dùng đến: *<tên con trỏ>
 * - Kích thước của con trỏ:
 * + Con trỏ chỉ lưu địa chỉ nên kích thước của mỗi con trỏ là như nhau
 * */

void khaiBaoConTro() {
    int *ptr1; // khai báo 1 con trỏ
    //poiter  có tên là ptr1 trỏ đến vùng nhớ int
    float ptr2, a;
    //ptr2 là con trỏ, a là biến
    int *ptr3 = NULL;
    double *ptr4;
    // ptr4 = &a; // Gán địa chỉ cho con trỏ ptr4 của biến
    int b = 10;
    //In ra giá trị và địa chỉ của biến b
    printf("Giá trị của biến b là: %d", b);
    printf("Địa chỉ của biến b có kiểu HEX: %x ", &b);
    printf("Địa chỉ của biến b có kiểu HEX: %p ", &b);
    //%p: in ra địa chỉ có kiểu HEX

}

void sizeConTro() {
    printf("SizeOf(int*) = %d", sizeof(int *));
}

void timSoLonHon() {
    int number1, number2;
    int *ptr1, *ptr2;
    //Nhập vào 2 số từ bàn phím
    printf("Nhập number 1: \n");
    scanf("%d", &number1);
    printf("Nhập number 2: ");
    scanf("%d", &number2);

    ptr1 = &number1;
    ptr2 = &number2;

    if (*ptr1 > *ptr2) {
        printf("So lon hon la: %d", *ptr1);
    } else {
        printf("So lon hon la: %d", *ptr2);
    }

}

//Tìm số lớn nhất trong 3 số a,b,c
int timMax(int *a, int *b, int *c) {
    int max = *a;
    if (*b > max) {
        max = *b;
    }
    if (*c > max) {
        max = *c;
    }

    return max;
}
//thuật toans sắp xếp nổi bọt
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void bubbleSort(int* arrNumber, int n){
    //Sắp xếp
    for(int i = 0; i < n-1 ;i++){
        for(int j = 0; j < n -1 - i ; j++){
            if(arrNumber[j] > arrNumber[j+1]){
                swap(&arrNumber[j], &arrNumber[j+1]);
            }
        }
    }
    //In ra mảng đã sắp xếp
    for(int i = 0; i< n; i++){
        printf("%3d", arrNumber[i]);
    }
}
int main() {
//    khaiBaoConTro();
//    timSoLonHon();

    int arrNumber[] = {3, 6, -1, 5, 6,7, 0};
    int n = sizeof(arrNumber) / sizeof(arrNumber[0]);
    bubbleSort(arrNumber, n);
    int a,b,c;
    printf("Nhập vào 3 số: ");
    scanf("%d%d%d", &a, &b,&c);
    printf("Giá trị lớn nhất là: %d", timMax(&a, &b, &c));
}
