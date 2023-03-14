#include <stdio.h>

double squareRoot(double n)
{

    double i, precision = 0.00001;

    for (i = 1; i * i <= n; ++i); // tim phan nguyen

    for (--i; i * i < n; i += precision); // tim phan thap phan

    return i;
}

int main()
{

    int n = 24;

    printf("Can bac hai cua %d = %lf", n, squareRoot(n));

    return 0;
}

// ket qua bang Can bac hai cua 24 = 4.898980

// Đoạn code trên có chức năng tính căn bậc hai của một số thực dương bất kỳ (được truyền vào hàm squareRoot() dưới dạng tham số n).

// Cách thức tính căn bậc hai trong đoạn code này là sử dụng phương pháp tiếp cận giá trị gần đúng, bằng cách chia số đó thành hai phần: phần nguyên và phần thập phân.

// Để tìm phần nguyên, chương trình sử dụng một vòng lặp for để tăng giá trị biến i từ 1 đến khi i bình phương lớn hơn hoặc bằng n. Sau đó, vòng lặp dừng lại và biến i được giảm đi 1 đơn vị để lấy giá trị phần nguyên của căn bậc hai.

// Sau khi tìm được phần nguyên của căn bậc hai, chương trình sử dụng một vòng lặp khác để tiếp cận giá trị phần thập phân của căn bậc hai. Biến i được tăng dần với độ chính xác precision (được đặt là 0.00001) cho đến khi i bình phương lớn hơn hoặc bằng n.

//  Khi đó, giá trị i trả về là giá trị gần đúng của căn bậc hai với độ chính xác precision.

// Cuối cùng, chương trình trả về giá trị của i (tức là giá trị căn bậc hai đã tính được) thông qua lời gọi hàm squareRoot(n) trong hàm main(). Kết quả được in ra màn hình bằng cách sử dụng lệnh printf().