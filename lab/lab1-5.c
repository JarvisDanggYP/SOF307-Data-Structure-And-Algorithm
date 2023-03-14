#include <stdio.h>

int ucln(int a, int b){
    if (a * b == 0)
    {
        return a + b;
    }

    if (a > b)
    {
        return ucln(a - b, b);
    }
    else{
        return ucln(a, b - a);
    }
}

int main(){
    int a = 4;
    int b = 2;

    int uc = ucln(a, b);

    printf("\nUCLN = %d", uc);
}

// Đoạn code trên có chức năng tính Ước chung lớn nhất (UCLN) của hai số nguyên dương a và b (trong đó a và b được truyền vào hàm ucln() dưới dạng tham số). Cách thức tính UCLN được thực hiện bằng phương pháp đệ quy.

// Hàm ucln() là hàm đệ quy, với hai tham số đầu vào là a và b. Trong hàm này, điều kiện dừng của đệ quy là một trong hai số a hoặc b bằng 0. Khi đó, hàm sẽ trả về tổng của hai số a và b (vì UCLN của hai số bằng số khác 0 trong hai số đó).

// Nếu cả hai số a và b đều khác 0, hàm sẽ tiếp tục gọi chính nó (đệ quy) với tham số là (a-b, b) nếu a > b, và với tham số là (a, b-a) nếu a < b. Điều này sẽ giúp rút gọn giá trị của hai số cho đến khi một trong hai số bằng 0.

// Khi hàm main() được gọi, hai số nguyên a và b được khởi tạo với giá trị lần lượt là 4 và 2. Sau đó, hàm ucln() được gọi với hai tham số là a và b, và kết quả được gán cho biến uc.

// Cuối cùng, giá trị của biến uc được in ra màn hình bằng lệnh printf(). Kết quả in ra màn hình sẽ là "UCLN = 2", nghĩa là UCLN của hai số 4 và 2 là 2.



