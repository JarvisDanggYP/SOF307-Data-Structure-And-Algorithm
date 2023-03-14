#include <stdio.h>>
int sumRecursion(int n){
    if (n == 0)
    {
        return 0;
    }
    return n + sumRecursion(n-1);
    
}

int main(){
    int n = 4;

    int sum = sumRecursion(n);

    printf("\nSum = %d", sum);
}

// Đoạn code trên có chức năng tính tổng của các số nguyên từ 1 đến n (trong đó n được truyền vào hàm sumRecursion() dưới dạng tham số). Cách thức tính tổng được thực hiện bằng phương pháp đệ quy.

// Hàm sumRecursion() là hàm đệ quy, với một tham số đầu vào là n. Trong hàm này, điều kiện dừng của đệ quy là n = 0, nghĩa là nếu giá trị tham số truyền vào là 0 thì hàm sẽ trả về giá trị 0.

// Nếu giá trị tham số khác 0, hàm sẽ tiếp tục gọi chính nó (đệ quy) với tham số n-1, và kết quả trả về sẽ là tổng của giá trị tham số đó và kết quả đệ quy của hàm với tham số n-1.

// Khi hàm main() được gọi, n được khởi tạo với giá trị là 4. Sau đó, hàm sumRecursion() được gọi với tham số là n, và kết quả được gán cho biến sum.

// Cuối cùng, giá trị của biến sum được in ra màn hình bằng lệnh printf(). Kết quả in ra màn hình sẽ là "Sum = 10", nghĩa là tổng của các số nguyên từ 1 đến 4 là 10.