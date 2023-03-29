#include <stdio.h>

int main()
{
    int n, i, x, min, max, sum, temp, j = 0;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // printf("Nhap so phan tu cua mang: ");
    // scanf("%d", &n);

    // printf("Nhap cac gia tri cua mang:\n");
    // for (i = 0; i < n; i++) {
    //     printf("a[%d] = ", i);
    //     scanf("%d", &a[i]);
    // }

    printf("Cac gia tri cua mang la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        sum += a[i];
    }

    min = max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("\nTong cac gia tri trong mang la: %d\n", sum);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    printf("Gia tri lon nhat trong mang la: %d\n", max);

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Gia tri %d co vi tri la: %d\n", x, i);
            break;
        }
    }
    if (i == n) {
        printf("Khong tim thay gia tri %d trong mang\n", x);
    }

    // sap xep mang theo thu tu tang dan
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // xuat mang da sap xep ra man hinh
    printf("Mang da sap xep tang dan la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


// Giải thích chi tiết từng bước trong giải thuật:

// Khai báo các biến:
// n là số phần tử của mảng.
// i là biến đếm.
// x là giá trị cần tìm trong mảng.
// min, max lần lượt là giá trị nhỏ nhất và lớn nhất của mảng.
// sum là tổng giá trị của mảng.
// a là mảng số nguyên với tối đa 100 phần tử.
// Nhập giá trị cho `n
// Nhập giá trị cho mảng a từ bàn phím sử dụng vòng lặp for.
// Xuất các giá trị của mảng a ra màn hình sử dụng vòng lặp for. Trong quá trình xuất, tính tổng giá trị của mảng a.
// Tìm giá trị nhỏ nhất và lớn nhất của mảng a bằng cách sử dụng vòng lặp for và so sánh từng giá trị của mảng với min và max.
// Nhập giá trị x cần tìm từ bàn phím.
// Tìm vị trí của giá trị x trong mảng a sử dụng vòng lặp for. Nếu tìm thấy giá trị x trong mảng, xuất ra vị trí của nó. Nếu không tìm thấy, xuất ra thông báo không tìm thấy giá trị.
// Sắp xếp mảng a theo thứ tự tăng dần sử dụng thuật toán sắp xếp nổi bọt. 
// Vòng lặp bên ngoài sẽ chạy từ đầu đến cuối mảng, vòng lặp bên trong sẽ chạy từ vị trí kế tiếp của vòng lặp bên ngoài đến cuối mảng. Nếu giá trị của a[i] lớn hơn giá trị của a[j] thì hoán đổi chúng.
// Xuất mảng a sau khi sắp xếp theo thứ tự tăng dần.
// Đây là giải thuật đầy đủ để thực hiện các yêu cầu được nêu trong đề bài. Bạn có thể thay đổi giá trị của biến n và các phần tử của mảng a để kiểm tra kết quả của giải thuật trên.