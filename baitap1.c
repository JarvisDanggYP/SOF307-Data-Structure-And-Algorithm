// Ngôn ngữ tự nhiên:

// Để tính chu vi và diện tích hình chữ nhật, ta có thể làm như sau:

// Nhập độ dài hai cạnh a và b của hình chữ nhật từ bàn phím.
// Tính chu vi của hình chữ nhật theo công thức chu vi = 2(a + b).
// Tính diện tích của hình chữ nhật theo công thức diện tích = a x b.
// Hiển thị kết quả chu vi và diện tích của hình chữ nhật trên màn hình.


// Lưu đồ khối:

// start
//    | 
//    V
// Nhập a, b
//    | 
//    V
// Chu vi = 2(a+b)
//    |
//    V
// Diện tích = a*b
//    |
//    V
// Hiển thị kết quả
//    |
//    V
// end


// Giải mã:

// BEGIN
//     Nhập a, b từ bàn phím
//     ChuVi = 2*(a + b)
//     DienTich = a * b
//     Hiển thị ChuVi và DienTich
// END


// Ngôn ngữ lập trình C:

#include <stdio.h>

int main() {
    float a, b, ChuVi, DienTich;

    printf("Nhập chiều dài a: ");
    scanf("%f", &a);

    printf("Nhập chiều rộng b: ");
    scanf("%f", &b);

    ChuVi = 2 * (a + b);
    DienTich = a * b;

    printf("Chu vi hình chữ nhật là: %.2f \n", ChuVi);
    printf("Diện tích hình chữ nhật là: %.2f \n", DienTich);

    return 0;
}
