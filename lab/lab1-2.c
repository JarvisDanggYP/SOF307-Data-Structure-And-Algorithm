#include <stdio.h>

int main()
{

    int even = 24;

    int odd = 31;

    if (even % 2 == 0)
    {

        printf("%d la so chan\n", even);
    }
    else
    {

        printf("%d la so le\n", even);
    }

    if (odd % 2 != 0)
    {

        printf("%d la so le\n", odd);
    }
    else
    {

        printf("%d la so chan\n", odd);
    }

    return 0;
}

// Đoạn code trên có chức năng kiểm tra xem một số có phải là số chẵn hay không. Đầu tiên, chương trình khởi tạo hai biến số nguyên even và odd với giá trị lần lượt là 24 và 31.

// Sau đó, chương trình sử dụng câu lệnh if để kiểm tra xem giá trị của biến even có phải là số chẵn hay không. Nếu giá trị của even là số chẵn (tức là phần dư của even khi chia cho 2 là 0), chương trình sẽ in ra màn hình dòng chữ "24 la so chan" (dòng lệnh printf được sử dụng để in giá trị ra màn hình). Nếu giá trị của even không phải là số chẵn, chương trình sẽ in ra màn hình dòng chữ "24 la so le".

// Tiếp theo, chương trình kiểm tra xem giá trị của biến odd có phải là số lẻ hay không. Nếu giá trị của odd là số lẻ (tức là phần dư của odd khi chia cho 2 là khác 0), chương trình sẽ in ra màn hình dòng chữ "31 la so le". Nếu giá trị của odd không phải là số lẻ, chương trình sẽ in ra màn hình dòng chữ "31 la so chan".

// Cuối cùng, chương trình trả về giá trị 0 để kết thúc hàm main().