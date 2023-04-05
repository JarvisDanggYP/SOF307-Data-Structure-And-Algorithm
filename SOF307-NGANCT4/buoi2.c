#include <stdio.h>
/*
    Con trỏ
        +Bộ nhớ máy tính
            - Bộ nhớ ram chứa rất nhiều ô nhớ , mỗi ô nhớ có kích thước 1 byte
            -Mỗi ô nhớ có địa chỉ duy nhất và được đánh số từ 0
            - Địa chỉ của value được lưu trữ ở hệ thập lục phân (hexadeciaml)
            -Mỗi ô nhớ là 1 byte, tuy nhiên hệ thống có thể đọc ra hoặc ghi nhiều byte(2,4,8 byte)
        +Con trỏ trong lập trình C :
            -Công thức dùng :
            <Kiểu dữ liệu >* <tên con trỏ>
            - COn trỏ không có kiểu dữ liệu bởi con trỏ chỉ trỏ đến địa chỉ thì địa chỉ nào cũng giống nhau , không có địa
            chỉ số nguyên , float, double ...
        +Đặt địa chỉ của biến vào con trỏ sử dụng toán tự &
            -<Tên con trỏ> =& <Tên biến>
        +Kích thước của con trỏ :
            -Con trỏ chỉ địa lưu địa chỉ nên kích thước của mọi con trỏ là như nhau :
            -Môi trường MD-DOS(16 bit): con trỏ chỉ tốn 2 byte
            -Môi trường WINDOWS(32|64 bit) : 4 byte
            -Toán tử & dùng để truy cập vào địa chỉ
*/
void khoiTaoConTro()
{
    int *prt1; // Khởi tạo 1 con trỏ
    // pointer có tên prt1 trỏ đến vùng nhớ có kiểu int
    double *prt2;
    int b = 5, c = 9;
    printf("Gia tri cua bien b = %d", b);
    printf("Dia chi cua bien b co kieu hex trong ram : %x", &b);
    printf("Dia chi cua bien b co kieu hex trong ram : %p", &b);
}
void sizeConTro()
{
    printf("SIze of (char*) : %d\n ", sizeof(char *));
    printf("SIze of (int*) : %d\n ", sizeof(int *));
    printf("SIze of (long*) : %d\n ", sizeof(long *));
}
// tim so lon hon trong 2 so1, so 2
void timSoLonHon()
{
    int so1 = 5, so2 = 3;
    int *prt;
    if (so1 > so2)
    {
        prt = &so1;
    }
    else
    {
        prt = &so2;
    }
    printf("so lon hon la %d", *prt);
}

// tim so lon nhat trong 3 so
int timMax(int *a, int *b, int *c)
{

    int max = *a;
    if (max < *b)
    {
        max = *b;
    }
    else if (max < *c)
    {
        max = *c;
    }
    else
    {
        max = *a;
    }
    return max;
}
// thuat toan bubblesort
// Ham hoan doi 2 gt a va b
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int *arrNumber, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            swap(arrNumber[j], arrNumber[j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("mang da sap xep : %d", &arrNumber[i]);
    }
}
int main()
{
    // khoiTaoConTro();
    // sizeConTro();
    // timSoLonHon();
    //  int a = 1,b=6,c=-1;
    //   printf("so lon nhat %d",timMax(&a,&b,&c));
    int arrNumber[] = {2, 1, 6, 3, 4};
    int n = sizeof(arrNumber) / sizeof(arrNumber[0]);
    bubblesort(arrNumber, n);
}