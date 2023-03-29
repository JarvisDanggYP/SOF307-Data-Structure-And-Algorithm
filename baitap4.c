#include <stdio.h>

// 1, Phát biểu bài toán sắp xếp

// Bài toán sắp xếp là một trong những bài toán cơ bản trong lĩnh vực khoa học máy tính.
// Bài toán đặt ra câu hỏi là làm thế nào để sắp xếp một danh sách các phần tử theo một thứ tự nhất định. 
// Ví dụ, sắp xếp một danh sách các số nguyên theo thứ tự tăng dần hoặc giảm dần.
// Trong ngôn ngữ lập trình C, ta có thể sử dụng nhiều thuật toán để giải quyết bài toán sắp xếp. 
// Các thuật toán phổ biến nhất bao gồm: Bubble Sort, Selection Sort, Insertion Sort, Quick Sort và Merge Sort.


// 2, Nêu ý tưởng, ví dụ minh họa, giải thuật phương pháp sắp xếp chọn

// Ý tưởng của phương pháp sắp xếp chọn (Selection sort) là tìm kiếm phần tử nhỏ nhất trong mảng và đưa nó về vị trí đầu tiên, 
// sau đó tìm kiếm phần tử nhỏ nhất tiếp theo trong mảng chưa được sắp xếp và đưa nó về vị trí thứ hai, 
// và tiếp tục cho đến khi tất cả các phần tử được sắp xếp.

// Ví dụ minh họa: [5, 3, 8, 6, 2, 7]

// Giả sử ta có một mảng chưa được sắp xếp như sau:
// Bước 1: Tìm phần tử nhỏ nhất trong mảng, ở đây là phần tử 2.
// Bước 2: Đưa phần tử nhỏ nhất về vị trí đầu tiên, ta đổi chỗ phần tử 2 với phần tử 5.
// Kết quả sau bước 2: [2, 3, 8, 6, 5, 7]
// Bước 3: Tìm phần tử nhỏ nhất trong mảng chưa được sắp xếp, ở đây là phần tử 3.
// Bước 4: Đưa phần tử nhỏ nhất về vị trí thứ hai, ta đổi chỗ phần tử 3 với phần tử 8.
// Kết quả sau bước 4: [2, 3, 8, 6, 5, 7]
// Bước 5: Tìm phần tử nhỏ nhất trong mảng chưa được sắp xếp, ở đây là phần tử 5.
// Bước 6: Đưa phần tử nhỏ nhất về vị trí thứ ba, ta đổi chỗ phần tử 5 với phần tử 8.
// Kết quả sau bước 6: [2, 3, 5, 6, 8, 7]
// Bước 7: Tiếp tục tìm và đưa các phần tử nhỏ nhất trong mảng chưa được sắp xếp về vị trí tiếp theo cho đến khi tất cả các phần tử được sắp xếp.

// Giải thuật phương pháp sắp xếp chọn:
// 1. Đầu vào: Mảng A chưa được sắp xếp, độ dài n.
// 2. for i from 0 to n-1 do the following steps:
//     a. Tìm phần tử nhỏ nhất trong mảng A[i:n-1], đặt vị trí của phần tử nhỏ nhất là j.
//     b. Đổi chỗ phần tử A[i] với phần tử A[j].
// 3. Đầu ra: Mảng A đã

// vòng lặp for để duyệt qua từng phần tử của mảng. Vòng lặp bên trong tìm kiếm phần tử nhỏ nhất trong đoạn từ i đến n-1 và đổi chỗ phần tử đó với phần tử arr[i].
// Cuối cùng, hàm trả về mảng đã được sắp xếp.

// Ví dụ mã code C cho phương pháp sắp xếp chọn:

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Trong đó, hàm selection_sort() nhận đầu vào là một mảng arr chưa được sắp xếp và độ dài n.
// Hàm sử dụng hai vòng lặp for để duyệt qua từng phần tử của mảng và tìm kiếm phần tử nhỏ nhất trong đoạn từ i đến n-1 và đổi chỗ phần tử đó với phần tử arr[i]. 
// Cuối cùng, mảng đầu vào sẽ được sắp xếp và không cần trả về bất kỳ giá trị nào.

// 3, Nêu ý tưởng, ví dụ minh họa, giải thuật phương pháp sắp xếp nổi bọt

// Ý tưởng:
// Sắp xếp nổi bọt là một thuật toán đơn giản trong việc sắp xếp các phần tử trong một danh sách. 
// Thuật toán hoạt động bằng cách so sánh hai phần tử liên tiếp trong danh sách và hoán đổi chúng nếu chúng không được sắp xếp đúng thứ tự. 
// Quá trình này lặp lại cho đến khi danh sách được sắp xếp hoàn toàn.

// Ví dụ minh họa:
// Giả sử chúng ta có một danh sách gồm các số nguyên sau đây: [5, 3, 8, 6, 7, 2]. 
// Để sắp xếp danh sách này theo thứ tự tăng dần, ta áp dụng thuật toán sắp xếp nổi bọt như sau:

// Bước 1: So sánh phần tử đầu tiên và thứ hai trong danh sách, ta thấy 3 nhỏ hơn 5 nên hoán đổi chúng. Danh sách hiện tại là [3, 5, 8, 6, 7, 2].
// Bước 2: So sánh phần tử thứ hai và thứ ba trong danh sách, ta thấy 5 nhỏ hơn 8 nên không cần hoán đổi. Danh sách hiện tại là [3, 5, 8, 6, 7, 2].
// Bước 3: So sánh phần tử thứ ba và thứ tư trong danh sách, ta thấy 8 lớn hơn 6 nên hoán đổi chúng. Danh sách hiện tại là [3, 5, 6, 8, 7, 2].
// Bước 4: So sánh phần tử thứ tư và thứ năm trong danh sách, ta thấy 8 lớn hơn 7 nên hoán đổi chúng. Danh sách hiện tại là [3, 5, 6, 7, 8, 2].
// Bước 5: So sánh phần tử thứ năm và thứ sáu trong danh sách, ta thấy 8 lớn hơn 2 nên hoán đổi chúng. Danh sách hiện tại là [3, 5, 6, 7, 2, 8].
// Bước 6: Lặp lại quá trình từ bước 1 đến bước 5 trên danh sách con [3, 5, 6, 7, 2], ta hoán đổi 7 và 2. Danh sách hiện tại là [3, 5, 6, 2, 7, 8].
// Bước 7: Lặp lại quá trình từ bước 1 đến bước 6 trên danh sách con [3, 5, 6, 2], ta hoán đổi 6 và 2. Danh sách hiện tại là [3, 5, 2,
// Bước 8: Lặp lại quá trình từ bước 1 đến bước 7 trên danh sách con [3, 5, 2], ta hoán đổi 5 và 2. Danh sách hiện tại là [3, 2, 5, 7, 6, 8].
// Bước 9: Lặp lại quá trình từ bước 1 đến bước 8 trên danh sách con [3, 2, 5], ta hoán đổi 3 và 2. Danh sách hiện tại là [2, 3, 5, 7, 6, 8].
// Sau bước 9, ta thấy danh sách đã được sắp xếp theo thứ tự tăng dần. Quá trình sắp xếp này hoàn toàn dựa trên việc so sánh và hoán đổi các phần tử liên tiếp. 
// Khi danh sách đã được sắp xếp đúng thứ tự, thuật toán sẽ dừng lại.

// Giải thuật phương pháp sắp xếp nổi bọt:

// Lặp lại quá trình sắp xếp cho đến khi danh sách được sắp xếp hoàn toàn.
// Trong mỗi lần lặp lại quá trình, ta lặp lại việc so sánh và hoán đổi các phần tử liên tiếp trong danh sách, 
// nếu chúng không được sắp xếp đúng thứ tự.
// Khi một phần tử được hoán đổi, ta đánh dấu rằng danh sách vẫn chưa được sắp xếp hoàn toàn.
// Thuật toán sắp xếp nổi bọt là một thuật toán đơn giản và dễ hiểu, tuy nhiên nó có hiệu quả chưa tốt đối với các danh sách lớn vì sự phức tạp của nó là O(n^2). 
// Vì vậy, khi sử dụng thuật toán này, chúng ta cần cân nhắc giữa độ đơn giản và hiệu quả của thuật toán.

void bubbleSort(int arr[], int n) {
   int i, j, temp;
   for (i = 0; i < n-1; i++) {
      // Lặp qua từng phần tử trong danh sách
      for (j = 0; j < n-i-1; j++) {
         // Nếu phần tử hiện tại lớn hơn phần tử tiếp theo, ta hoán đổi chúng
         if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   printf("Danh sach da duoc sap xep theo thu tu tang dan: \n");
   for (int i=0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   return 0;
}

// Trong ví dụ này, ta tạo một danh sách gồm các số nguyên không được sắp xếp trước đó. 
// Sau đó, ta sử dụng hàm bubbleSort để sắp xếp danh sách theo thứ tự tăng dần. 
// Cuối cùng, ta in ra danh sách đã được sắp xếp. Kết quả sẽ là:

// Danh sach da duoc sap xep theo thu tu tang dan:
// 11 12 22 25 34 64 90

// 4, Nêu ý tưởng, ví dụ minh họa, giải thuật phương pháp sắp xếp chèn

// Ý tưởng của phương pháp sắp xếp chèn (insertion sort) là tìm vị trí thích hợp để chèn phần tử cần sắp xếp vào danh sách đã được sắp xếp trước đó. 
// Thuật toán này phù hợp với việc sắp xếp một danh sách có số lượng phần tử nhỏ.

// Ví dụ minh họa:

// Giả sử chúng ta có một danh sách số nguyên chưa được sắp xếp như sau: [8, 3, 6, 2, 5, 1, 4, 7]
// Bây giờ, chúng ta sẽ áp dụng phương pháp sắp xếp chèn để sắp xếp danh sách này.

// Bước 1: Ta bắt đầu từ vị trí thứ hai của danh sách (phần tử đầu tiên được coi là đã được sắp xếp). 
// So sánh phần tử thứ hai với phần tử đầu tiên. Nếu phần tử thứ hai nhỏ hơn phần tử đầu tiên, ta đổi chỗ hai phần tử này.
// [3, 8, 6, 2, 5, 1, 4, 7]

// Bước 2: Ta tiếp tục so sánh phần tử thứ ba với phần tử trước đó (ở vị trí thứ hai). 
// Nếu phần tử thứ ba nhỏ hơn phần tử thứ hai, ta đổi chỗ hai phần tử này. 
// Sau đó, ta so sánh phần tử thứ ba với phần tử đầu tiên. Nếu phần tử thứ ba nhỏ hơn phần tử đầu tiên, ta đổi chỗ hai phần tử này.
// [3, 6, 8, 2, 5, 1, 4, 7]

// Bước 3: Ta tiếp tục so sánh phần tử thứ tư với các phần tử đã được sắp xếp trước đó. 
// Ta so sánh phần tử thứ tư với phần tử thứ ba. Vì phần tử thứ tư nhỏ hơn phần tử thứ ba, ta đổi chỗ hai phần tử này. 
// Sau đó, ta so sánh phần tử thứ tư với phần tử thứ hai. Vì phần tử thứ tư nhỏ hơn phần tử thứ hai, ta đổi chỗ hai phần tử này. 
// Tiếp tục so sánh phần tử thứ tư với phần tử đầu tiên. Vì phần tử thứ tư nhỏ hơn phần tử đầu tiên, ta đổi chỗ hai phần tử này.
// [2, 3, 6, 8, 5, 1, 4, 7]

// Bước 4: Tiếp tục tương tự như bước 3, ta so sánh phần tử thứ năm với các phần tử đã được sắp xếp trước đó. 
// Trong trường hợp này, phần tử thứ năm lớn hơn phần tử thứ tư và nhỏ hơn phần tử thứ sáu, 
// nên ta sẽ chèn phần tử thứ năm vào giữa phần tử thứ tư và phần tử thứ sáu.
// [2, 3, 5, 6, 8, 1, 4, 7]

// Bước 5: Tiếp tục quá trình sắp xếp với phần tử tiếp theo cho đến hết danh sách. 
// Quá trình sắp xếp sẽ tiếp tục cho đến khi tất cả các phần tử đã được sắp xếp.
// [1, 2, 3, 4, 5, 6, 7, 8]

// Đến đây, danh sách đã được sắp xếp theo thứ tự tăng dần bằng phương pháp sắp xếp chèn.

// Giải thuật phương pháp sắp xếp chèn:

// 1. Đầu tiên, lấy phần tử thứ i trong danh sách cần sắp xếp.
// 2. So sánh phần tử thứ i với các phần tử đã được sắp xếp trước đó, 
//     từ phần tử ở vị trí i-1 đến phần tử ở vị trí đầu tiên của danh sách. 
//     Nếu phần tử thứ i nhỏ hơn phần tử đang xét, ta đổi chỗ hai phần tử này.
// 3. Lặp lại bước 2 cho đến khi phần tử thứ i đã được sắp xếp đúng vị trí.
// 4. Lặp lại
// 5. Lặp lại các bước 1 đến 4 cho tất cả các phần tử trong danh sách cần sắp xếp.
// Phương pháp sắp xếp chèn có độ phức tạp O(n^2), tức là thời gian thực hiện phương pháp này tăng theo bình phương số lượng phần tử trong danh sách cần sắp xếp. 
// Tuy nhiên, phương pháp này có thể hiệu quả khi danh sách đã được sắp xếp theo một phần hoặc khi số lượng phần tử trong danh sách nhỏ.

// Để tối ưu hơn, ta có thể sử dụng phương pháp sắp xếp chèn nhị phân để tìm vị trí thích hợp để chèn phần tử mới vào danh sách đã được sắp xếp trước đó. 
// Tuy nhiên, việc cài đặt phương pháp này có thể khó khăn hơn so với phương pháp sắp xếp chèn thông thường.

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        /* Di chuyển các phần tử của mảng có giá trị lớn hơn key về sau một vị trí */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 3, 1, 4, 2, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Đầu vào của chương trình là một mảng các số nguyên arr và số lượng phần tử trong mảng n. 
// Hàm insertion_sort được sử dụng để sắp xếp mảng theo thứ tự tăng dần. 
// Trong hàm này, ta sử dụng hai biến i và j để duyệt qua từng phần tử của mảng và key để lưu trữ giá trị của phần tử đang xét. 
// Các phần tử trước key có giá trị lớn hơn sẽ được di chuyển về sau một vị trí để chứa key. 
// Cuối cùng, hàm main được sử dụng để in ra mảng đã được sắp xếp. Kết quả đầu ra sẽ là: 1 2 3 4 5

// 5, Sử dụng phương pháp sắp xếp để làm gì?

// Phương pháp sắp xếp là một kỹ thuật trong lập trình và toán học được sử dụng để sắp xếp các phần tử trong một danh sách theo một thứ tự nhất định. 
// Việc sắp xếp này có thể được sử dụng để giải quyết nhiều vấn đề khác nhau, ví dụ như:

// 1. Tìm kiếm dữ liệu: Sau khi sắp xếp, việc tìm kiếm một phần tử trong danh sách trở nên dễ dàng hơn bằng cách sử dụng các thuật toán tìm kiếm như tìm kiếm nhị phân.

// 2. Tối ưu hóa thời gian và không gian: Các thuật toán sắp xếp có thể giúp tối ưu hóa thời gian và không gian khi xử lý dữ liệu trong các ứng dụng phức tạp, đặc biệt là các ứng dụng với dữ liệu lớn.

// 3. Phân tích dữ liệu: Khi các phần tử trong danh sách được sắp xếp theo thứ tự, việc phân tích và xử lý dữ liệu trở nên đơn giản hơn.

// 4. Cải thiện hiệu suất của các thuật toán khác: Việc sắp xếp trước các phần tử trong danh sách có thể cải thiện hiệu suất của các thuật toán khác như phân chia và trị hoặc (divide and conquer), thuật toán Greedy, ...

// Tóm lại, việc sắp xếp danh sách là một kỹ thuật quan trọng trong lập trình và toán học, có thể được sử dụng để giải quyết nhiều vấn đề khác nhau liên quan đến xử lý dữ liệu.