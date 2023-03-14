#include <stdio.h>
int digitCount(int n){
    if (n == 0)
    {
        return 0;
    }

    return 1 + digitCount(n/10);
}

int main(){
    int n = 123;

    int dc = digitCount(n);

    printf("\n DC = %d", dc);
}

// Đoạn code trên có chức năng đếm số chữ số của một số nguyên dương n (trong đó n được truyền vào hàm digitCount() dưới dạng tham số). Cách thức tính số chữ số được thực hiện bằng phương pháp đệ quy.

// Hàm digitCount() là hàm đệ quy, với một tham số đầu vào là n. Trong hàm này, điều kiện dừng của đệ quy là khi n bằng 0, tức là không còn chữ số nào trong số cần đếm. Khi đó, hàm sẽ trả về giá trị 0.

// Nếu số nguyên dương n còn có chữ số, hàm sẽ tiếp tục đệ quy với tham số là n/10 (phép toán này sẽ loại bỏ chữ số đơn vị của số n), và cộng kết quả trả về của đệ quy với 1 (vì đã tìm thấy một chữ số). Quá trình đệ quy sẽ tiếp tục cho đến khi số n bằng 0.

// Khi hàm main() được gọi, một số nguyên dương n được khởi tạo với giá trị là 123. Sau đó, hàm digitCount() được gọi với tham số là n, và kết quả trả về được gán cho biến dc.

// Cuối cùng, giá trị của biến dc được in ra màn hình bằng lệnh printf(). Kết quả in ra màn hình sẽ là "DC = 3", nghĩa là số 123 có 3 chữ số.