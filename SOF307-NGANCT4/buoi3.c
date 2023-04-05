#include <stdio.h>
#include <stdlib.h>
// trong c+ new delete
// quản lý bộ nhớ động

/*
-Truyền tham trị là truyền giá trị của biến
(không phải là địa chỉ ô nhớ )
+Phương thức tạo ra 1 địa chỉ ô nhớ mới để lưu trữ giữ gía trị đó
+giá trị cua biến không bị thay đổi bên ngoài phương thức
+chỉ thay đổi bên trong phương thức hiện hành
_Truyền tham thiếu là truyền địa chỉ ô nhớ của biến
+Khi thay đổi giá trị của biến bên trong phương thức thì giá trị của biến bên ngoài phương thức cũng thay đổi theo
*/
void hoanViThamTri(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("hoan vi tham tri a = %d, b = %d ", a, b);
}
void hoanViThamChieu(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("hoan vi tham chieu ben trong a = %d, b = %d ", a, b);
}
void swap(int *a, int *b)
{
    /*
    con trỏ và mảng 1 chiều
    - giá trị arr là địa chỉ phần tử đầu tiên của mảng
    Công thức
    <tên mảng> == &<array[0];
    - phép toán số học trên con trỏ :
    n + sizeof(<kiểu dữ liệu>)
    */
}
void nhapMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao arr[%d]", i);
        scanf("%d", arr);
        arr++;
    }
}
void inMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *arr);
        arr++;
    }
}
void themPhanTu(int *arr, int n, int viTriThem, int giaTriThem)
{
    // cấp phát thêm bộ nhớ cho mảng, kích thước > 1
    n++;
    // relloc() thay đổi bộ nhớ được cấp phát
    arr = (int *)realloc(arr, n * sizeof(int)); // tinh byte
    // 1469
    //  chen so 2 vao sau so 4
    for (int i = n - 1; i < viTriThem; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[viTriThem] = giaTriThem;
}
int main()
{
    int a = 3, b = 5;
    // hoanViThamTri(a,b);
    // hoanViThamChieu(&a,&b);
    // printf("hoan vi tham chieu ben ngoai a = %d, b = %d ",a,b);

    // Nhập vào một mảng, in ra mảng đó
    // nhập số lượng phần tự của mảng
    int n;
    int *arr;
    // nhập số lượng phần tự của mảng
    do
    {
        printf("nhap so phan tu cua mang \n");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("SO luong phan tu khong hop le ");
        }

    } while (n < 0);
    // cấp phát bộ nhớ
    arr = (int *)malloc(n * sizeof(int));
    // maloc( không gán giá trị ban đầu
    // calloc() sẽ gán giá trị mặc định cho ô nhớ
    // relloc() thay đổi bộ nhớ đc cấp phát
    //  nhập 1 mảng

    nhapMang(arr, n);
    // in ra mảng
    inMang(arr, n);
    themPhanTu(arr, n, 1, 34);
    inMang(arr, n + 1);
    if (arr != NULL)
    {
        free(arr); // Giai phong bo nho
        // Neu khong giai phong o nho se ton nhieu tainguyen mtinh
    }
}