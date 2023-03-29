// 1. Khái niệm đệ quy

// Đệ quy là một khái niệm trong lập trình máy tính, được sử dụng để mô tả một phương pháp giải quyết vấn đề dựa trên việc giải quyết các vấn đề con. 
// Trong đệ quy, một chương trình có thể gọi lại chính nó để giải quyết một vấn đề nhỏ hơn, và chương trình sẽ tiếp tục gọi lại chính nó cho đến khi đạt được điều kiện dừng.

// Một ví dụ đơn giản về đệ quy là tính giai thừa của một số nguyên dương. 
// Giai thừa của một số nguyên dương n được định nghĩa là tích của tất cả các số nguyên dương từ 1 đến n. 
// Ví dụ: 5! = 5 x 4 x 3 x 2 x 1 = 120. Để tính giai thừa của n, ta có thể sử dụng công thức đệ quy sau:

// n! = 1 nếu n = 1
// n! = n x (n-1)! nếu n > 1
// Công thức này sử dụng chính nó để tính giai thừa của số nhỏ hơn. Khi n = 1, công thức đệ quy dừng lại và trả về kết quả 1.

// Đệ quy có thể được sử dụng để giải quyết nhiều vấn đề khác nhau trong lập trình, bao gồm cấu trúc dữ liệu, thuật toán tìm kiếm, thuật toán sắp xếp và nhiều hơn nữa. 
// Việc sử dụng đệ quy có thể giúp viết code ngắn gọn và dễ đọc hơn, nhưng cũng có thể dẫn đến các vấn đề hiệu suất và tràn bộ nhớ nếu không được sử dụng đúng cách.


// 2. Có mấy loại đệ quy ?  Đó là gì

// Có hai loại đệ quy chính trong lập trình máy tính:

// 1. Đệ quy trực tiếp (direct recursion): là khi hàm gọi chính nó trong thân hàm của nó.
// Ví dụ:
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1); // Đệ quy trực tiếp
    }
}

// 2. Đệ quy gián tiếp (indirect recursion): là khi hai hoặc nhiều hàm gọi lẫn nhau theo một chuỗi đệ quy. 
// Ví dụ:

void foo(int n) {
    if (n > 0) {
        bar(n-1); // Đệ quy gián tiếp
    }
    printf("%d ", n);
}

void bar(int n) {
    if (n > 0) {
        foo(n-1); // Đệ quy gián tiếp
    }
}
//

void A() {
    printf("A\n");
    B();
}

void B() {
    printf("B\n");
    C();
}

void C() {
    printf("C\n");
    A();
}
// Trong ví dụ này, hàm A gọi hàm B, hàm B gọi hàm C và hàm C lại gọi hàm A. Việc gọi hàm A trong hàm C khiến cho đệ quy gián tiếp xảy ra.

// Cả hai loại đệ quy này đều có thể được sử dụng để giải quyết các vấn đề trong lập trình, 
// tuy nhiên, cần cẩn thận trong việc sử dụng để tránh các vấn đề hiệu suất và tràn bộ nhớ.


// 3. Cấu trúc 1 hàm đệ quy gồm mấy thành phần? Đó là những thành phần nào

// Một hàm đệ quy bao gồm các thành phần sau:

// 1. Điều kiện dừng (base case): là điều kiện để chương trình không tiếp tục gọi lại chính nó mà trả về một giá trị cố định. 
// Nếu không có điều kiện dừng, chương trình sẽ tiếp tục gọi lại chính nó một cách vô hạn và gây ra lỗi tràn bộ nhớ.

// 2. Tham số đầu vào: là giá trị truyền vào cho hàm đệ quy để xử lý. Trong quá trình đệ quy, giá trị của tham số này có thể thay đổi.

// 3. Lời gọi đệ quy: là lời gọi chính hàm đệ quy với tham số khác, để giải quyết bài toán con nhỏ hơn. 
// Lời gọi này được thực hiện trong cấu trúc của hàm, và có thể được lặp lại nhiều lần cho đến khi đạt được điều kiện dừng.

// 4. Trả về kết quả: là giá trị được trả về bởi hàm đệ quy. Kết quả này được tính toán từ các kết quả của các lời gọi đệ quy trong quá trình thực hiện hàm.

// Ví dụ, đây là cấu trúc của một hàm đệ quy tính tổng các số từ 1 đến n:

int sum(int n) {
    if (n == 0) { // Điều kiện dừng
        return 0;
    } else { // Thực hiện lời gọi đệ quy và tính tổng
        return n + sum(n-1);
    }
}

// Trong ví dụ này, điều kiện dừng là n = 0, tham số đầu vào là n, lời gọi đệ quy là sum(n-1), và kết quả trả về là tổng các số từ 1 đến n.


// 4. Viết hàm tìm mũ a mũ n sử dụng đệ quy 

// Để tính a mũ n bằng đệ quy, ta sử dụng phương pháp chia để trị (divide and conquer). 
// Phương pháp này chia bài toán thành hai bài toán con bằng cách lấy mũ n/2, rồi giải hai bài toán con này đệ quy. 
// Nếu n là số chẵn, thì ta tính a mũ n/2 bằng cách gọi đệ quy, rồi trả về kết quả bình phương của kết quả đó. 
// Nếu n là số lẻ, thì ta tính a mũ n-1 bằng đệ quy, rồi nhân kết quả đó với a.

// Dưới đây là một ví dụ về cách viết hàm tính a mũ n bằng đệ quy:

int power(int a, int n) {
    if (n == 0) { // Nếu n bằng 0, trả về 1
        return 1;
    } else if (n % 2 == 0) { // Nếu n chẵn, tính a^(n/2), rồi bình phương
        int temp = power(a, n/2);
        return temp * temp;
    } else { // Nếu n lẻ, tính a^(n-1), rồi nhân với a
        int temp = power(a, n-1);
        return a * temp;
    }
}

// Với hàm này, ta có thể tính a mũ n bằng cách gọi power(a, n).

// 5. Khử đệ quy 

// Khử đệ quy (hoặc còn gọi là đệ quy ngược) là phương pháp chuyển đổi một hàm đệ quy thành một hàm không đệ quy. 
// Phương pháp này thường được sử dụng để tối ưu hàm đệ quy và giảm thiểu chi phí bộ nhớ.

// Các bước chính để khử đệ quy là:

// 1. Xác định biến đầu vào và biến kết quả của hàm.

// 2. Xác định điều kiện dừng của hàm đệ quy và giá trị trả về tương ứng.

// 3. Tìm các biến trung gian và tính toán giá trị của chúng dựa trên giá trị đầu vào và các lời gọi đệ quy.

// 4. Sử dụng vòng lặp để tính toán kết quả dựa trên các giá trị trung gian và điều kiện dừng đã xác định.

// Ví dụ, để khử đệ quy hàm tính tổng các số từ 1 đến n, ta có thể sử dụng vòng lặp như sau:

int sum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

// Trong ví dụ này, biến đầu vào là n và biến kết quả là result. Điều kiện dừng của hàm đệ quy là n = 0, và giá trị trả về tương ứng là 0. 
// Các biến trung gian không cần thiết vì chúng có thể tính toán trực tiếp bằng vòng lặp. 
// Cuối cùng, ta sử dụng vòng lặp để tính toán kết quả dựa trên các giá trị trung gian và điều kiện dừng đã xác định.


// 6. Viết hàm tìm a mũ n sử dụng khử đệ quy

// Để tính a mũ n bằng khử đệ quy, ta có thể sử dụng phương pháp lặp. 
// Phương pháp này sử dụng vòng lặp để tính a mũ n dựa trên giá trị a, n và một số biến trung gian.

// Dưới đây là một ví dụ về cách viết hàm tính a mũ n bằng khử đệ quy:

int power(int a, int n) {
    int result = 1; // Khởi tạo kết quả là 1
    while (n > 0) { // Vòng lặp tính a mũ n
        if (n % 2 == 1) { // Nếu n lẻ, nhân kết quả với a
            result *= a;
        }
        a *= a; // Bình phương a
        n /= 2; // Chia n cho 2
    }
    return result;
}

// Với hàm này, ta có thể tính a mũ n bằng cách gọi power(a, n).