// 1. Danh sách liên kết là gì?

// Danh sách liên kết (linked list) là một cấu trúc dữ liệu được sử dụng để lưu trữ một tập hợp các phần tử. 
// Nó bao gồm một chuỗi các nút (node) được liên kết với nhau theo một thứ tự nhất định, 
// mỗi nút chứa một giá trị và một tham chiếu (pointer) đến nút tiếp theo trong danh sách.


// 2. Phân biệt danh sách liên kết và mảng 1 chiều

// Phân biệt danh sách liên kết và mảng 1 chiều:

//     + Mảng 1 chiều là một cấu trúc dữ liệu lưu trữ các phần tử có kiểu dữ liệu giống nhau và được lưu trữ tại các vị trí liên tiếp nhau trong bộ nhớ. 
//     Mảng có thể được truy cập bằng chỉ mục (index) của mỗi phần tử.

//     + Danh sách liên kết có thể lưu trữ các phần tử có kiểu dữ liệu khác nhau và được lưu trữ ở các vị trí ngẫu nhiên trong bộ nhớ. 
//     Danh sách liên kết không hỗ trợ truy cập bằng chỉ mục, mà thay vào đó, phải duyệt từ đầu danh sách để tìm kiếm phần tử.


// 3. Có mấy loại danh sách liên kết, Nêu cấu trúc và các phép toán của các loại danh sách đó

// Có ba loại danh sách liên kết phổ biến:

//     + Danh sách liên kết đơn (singly linked list): Mỗi nút trong danh sách chỉ có một tham chiếu đến nút tiếp theo.
//         Cấu trúc một nút:
        
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    struct Node* head = NULL;
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);
    printList(head);
    return 0;
}

// Trong ví dụ này, chúng ta định nghĩa một cấu trúc Node để lưu trữ dữ liệu và con trỏ next của mỗi nút. 
// Hàm push được sử dụng để chèn một phần tử mới vào đầu danh sách liên kết.
// Hàm printList được sử dụng để in ra các phần tử của danh sách. 
// Cuối cùng, trong hàm main, chúng ta tạo ra một danh sách liên kết đơn bằng cách chèn 
// các phần tử 1, 2 và 3 vào đầu danh sách và sau đó in ra danh sách này. Kết quả sẽ là: 1 2 3.


    //     Các phép toán:

    //     - Thêm một phần tử vào đầu danh sách: tạo một nút mới, gán giá trị cho nút đó và cho tham chiếu của nút đó trỏ đến nút đầu tiên của danh sách.
    //     - Thêm một phần tử vào cuối danh sách: duyệt danh sách đến nút cuối cùng, tạo một nút mới, 
    //         gán giá trị cho nút đó và cho tham chiếu của nút trước đó trỏ đến nút mới này.
    //     - Xóa một phần tử khỏi danh sách: duyệt danh sách để tìm phần tử cần xóa, 
    //         sau đó chỉnh sửa tham chiếu của nút trước đó để trỏ đến nút tiếp theo của phần tử đó.
    //     - Tìm kiếm một phần tử trong danh sách: duyệt danh sách để tìm phần tử cần tìm.

    // + Danh sách liên kết kép (doubly linked list): Mỗi nút trong danh sách có tham chiếu đến cả nút trước và nút sau của nó.
    //     Cấu trúc một nút:

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* push(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;
    printf("Forward: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    printf("Backward: ");
    current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);
    printList(head);
    return 0;
}

// Trong ví dụ này, chúng ta định nghĩa một cấu trúc Node để lưu trữ dữ liệu và hai con trỏ next và prev của mỗi nút. 
// Hàm push được sử dụng để chèn một phần tử mới vào danh sách liên kết kép. 
// Chúng ta tạo ra một nút mới và nối nó vào đầu danh sách bằng cách gán con trỏ next của nút mới 
// trỏ đến nút đầu tiên của danh sách và con trỏ prev của nó trỏ đến NULL. Nếu danh sách đã có các nút khác, 
// chúng ta nối nút mới vào đầu danh sách, rồi thiết lập con trỏ prev của nút đầu tiên của danh sách để trỏ đến nút mới.

// Hàm printList được sử dụng để in ra các phần tử của danh sách liên kết kép theo hai hướng: từ trái sang phải và từ phải sang trái. 
// Để in ra danh sách từ trái sang phải, chúng ta chỉ cần duyệt qua các nút của danh sách bắt đầu từ đầu danh sách và in ra dữ liệu của từng nút. 
// Để in ra danh sách từ phải sang trái, chúng ta sử dụng một biến current để trỏ đến nút cuối cùng của danh sách, 
// sau đó duyệt ngược từ cuối danh sách về đầu danh sách và in ra dữ liệu của từng nút.

// Cuối cùng, trong hàm main, chúng ta tạo ra một danh sách liên kết kép bằng cách 
// chèn các phần tử 1, 2 và 3 vào danh sách liên kết kép và in ra danh sách đó bằng cách gọi hàm printList.

// Forward: 1 2 3 
// Backward: 3 2 1 

// Đây là danh sách liên kết kép gồm 3 phần tử 1, 2 và 3, được in ra từ trái sang phải và từ phải sang trái. 
// Chúng ta có thể thấy rằng nút đầu tiên của danh sách liên kết (head) là nút 1, 
// con trỏ prev của nó trỏ đến NULL và con trỏ next của nó trỏ đến nút 2. 
// Tương tự, nút 2 có con trỏ prev trỏ đến nút 1 và con trỏ next trỏ đến nút 3, 
// nút 3 có con trỏ prev trỏ đến nút 2 và con trỏ next trỏ đến NULL. 
// Ngoài ra, chúng ta có thể duyệt danh sách từ phải sang trái bằng cách sử dụng con trỏ prev, 
// khi đó chúng ta sẽ được danh sách liên kết kép từ phải sang trái là 3, 2 và 1.

    //     Các phép toán:

    //     - Thêm một phần tử vào đầu danh sách: tạo một nút mới, gán giá trị cho nút đó, 
    //         cho tham chiếu của nút đó trỏ đến nút đầu tiên của danh sách và cho tham chiếu của nút đầu tiên trở lại trỏ đến nút mới này.
    //     - Thêm một phần tử vào cuối danh sách: duyệt danh sách đến nút cuối cùng, tạo một nút mới, 
    //         gán giá trị cho nút đó, cho tham chiếu của nút mới trỏ đến None và cho tham chiếu của nút cuối cùng trở lại trỏ đến nút mới này.
    //     - Xóa một phần tử khỏi danh sách: duyệt danh sách để tìm phần tử cần xóa, 
    //         sau đó chỉnh sửa tham chiếu của nút trước và nút sau để trỏ tới nhau và bỏ qua phần tử cần xóa.
    //     - Tìm kiếm một phần tử trong danh sách: duyệt danh sách để tìm phần tử cần tìm.

    // + Danh sách liên kết vòng (circular linked list): Mỗi nút trong danh sách có tham chiếu đến nút tiếp theo và nút cuối cùng trỏ lại nút đầu tiên của danh sách.
    //     Cấu trúc một nút:

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
}

int main() {
    struct Node* head = NULL;
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);
    printList(head);
    return 0;
}

// Trong ví dụ này, chúng ta định nghĩa một cấu trúc Node để lưu trữ dữ liệu và con trỏ next của mỗi nút. 
// Hàm push được sử dụng để chèn một phần tử mới vào danh sách liên kết vòng. 
// Nếu danh sách chưa có phần tử nào thì nút mới được chèn sẽ trở thành nút đầu tiên của danh sách và nút next của nó sẽ trỏ đến chính nó, 
// tạo thành một vòng. Nếu danh sách đã có các nút khác, chúng ta sẽ tìm nút cuối cùng trong danh sách và nối nút mới vào sau nó, 
// rồi nối nút cuối cùng với nút đầu tiên để tạo thành vòng.

// Hàm printList được sử dụng để in ra các phần tử của danh sách liên kết vòng. 
// Chú ý rằng, chúng ta phải sử dụng một vòng lặp do-while để duyệt qua các phần tử của danh sách vòng, 
// bắt đầu từ nút đầu tiên và kết thúc khi quay trở lại nút đầu tiên. Cuối cùng, trong hàm main, 
// chúng ta tạo ra một danh sách liên kết vòng bằng cách chèn các phần tử 1, 2 và 3 vào danh sách và sau đó in ra danh sách này. 
// Kết quả sẽ là: 1 2 3.

        // Các phép toán:

        // - Thêm một phần tử vào đầu danh sách: tạo một nút mới, gán giá trị cho nút đó, 
        //     cho tham chiếu của nút mới trỏ đến nút đầu tiên của danh sách và cho tham chiếu của nút cuối cùng trở lại trỏ đến nút mới này.
        // - Thêm một phần tử vào cuối danh sách: tạo một nút mới, gán giá trị cho nút đó, 
        //     cho tham chiếu của nút mới trỏ đến nút đầu tiên của danh sách và cho tham chiếu của nút cuối cùng trở lại trỏ đến nút mới này.
        // - Xóa một phần tử khỏi danh sách: duyệt danh sách để tìm phần tử cần xóa, 
        //     sau đó chỉnh sửa tham chiếu của nút trước và nút sau để trỏ tới nhau và bỏ qua phần tử cần xóa.
        // - Tìm kiếm một phần tử trong danh sách: duyệt danh sách để tìm phần tử cần tìm.

// Tổng hợp lại, danh sách liên kết là một cấu trúc dữ liệu linh hoạt và được sử dụng rộng rãi trong lập trình. 
// Các loại danh sách liên kết có thể được sử dụng để giải quyết các vấn đề khác nhau, tùy thuộc vào tính chất của bài toán.

// Một trong những ưu điểm của danh sách liên kết là có thể dễ dàng thêm hoặc xóa các phần tử ở bất kỳ vị trí nào của danh sách, 
// đồng thời tối ưu việc sử dụng bộ nhớ. Tuy nhiên, việc truy cập một phần tử bất kỳ trong danh sách 
// liên kết sẽ tốn nhiều thời gian hơn so với mảng 1 chiều.

// Trong lập trình, danh sách liên kết là một trong những cấu trúc dữ liệu quan trọng và 
// được sử dụng trong nhiều ứng dụng khác nhau như quản lý bộ nhớ động, lưu trữ dữ liệu đồ họa, v.v.





// 4. Cấu trúc cây là gì?

// Cấu trúc cây là một cấu trúc dữ liệu phân cấp, trong đó mỗi phần tử được gọi là nút (node), 
// và các nút được kết nối với nhau thông qua các cạnh (edge). 
// Các nút trong cây được chia thành các cấp bậc khác nhau, 
// với nút gốc (root node) ở cấp cao nhất và các nút lá (leaf node) ở cấp thấp nhất.


// 5. Có mấy loại cây

// Có nhiều loại cây khác nhau trong khoa học máy tính và toán học, 
// tuy nhiên hai loại cây phổ biến nhất là cây nhị phân và cây đồ thị.
// Cây nhị phân là một loại cây đặc biệt, trong đó mỗi nút có tối đa hai nút con, được gọi là nút con trái và nút con phải.
// Cây nhị phân thường được sử dụng để lưu trữ và tìm kiếm dữ liệu.

// 6. Nêu các cách duyệt cây nhị phân

// + Các cách duyệt cây nhị phân gồm:

//     - Duyệt theo thứ tự trước (pre-order traversal): duyệt nút hiện tại, sau đó duyệt cây con bên trái và cây con bên phải.

//     - Duyệt theo thứ tự giữa (in-order traversal): duyệt cây con bên trái, sau đó duyệt nút hiện tại và sau đó duyệt cây con bên phải.

//     - Duyệt theo thứ tự sau (post-order traversal): duyệt cây con bên trái, sau đó duyệt cây con bên phải và cuối cùng là nút hiện tại.

//     - Duyệt theo chiều rộng (breadth-first traversal): duyệt các nút cùng cấp trước, sau đó duyệt các nút cấp tiếp theo. 
//         Thuật toán này thường sử dụng hàng đợi (queue) để lưu trữ các nút cần duyệt.

//     - Tìm kiếm giá trị nhỏ nhất (find minimum value): duyệt cây theo thứ tự trái - gốc - phải để tìm giá trị nhỏ nhất trong cây.

//     - Tìm kiếm giá trị lớn nhất (find maximum value): duyệt cây theo thứ tự phải - gốc - trái để tìm giá trị lớn nhất trong cây.

//     - Thêm một nút mới vào cây (insert a new node): duyệt cây để tìm vị trí thích hợp để thêm nút mới vào cây.

//     - Xóa một nút khỏi cây (delete a node): duyệt cây để tìm nút cần xóa, sau đó thực hiện các thao tác phù hợp để xóa nút đó khỏi cây.

// Các thuật toán này đều được sử dụng để thao tác với cây nhị phân và giúp cho việc xử lý dữ liệu trên cây nhị phân trở nên hiệu quả hơn. 
// Trong thực tế, cây nhị phân tìm kiếm thường được sử dụng để lưu trữ và tìm kiếm dữ liệu trong các ứng dụng thực tế như cơ sở dữ liệu, 
// trình biên dịch, các ứng dụng về đồ họa, v.v.

// 7. Cây nhị phân tìm kiếm là gì

// Cây nhị phân tìm kiếm là một loại cây nhị phân đặc biệt, 
// trong đó các giá trị trong các nút được sắp xếp sao cho giá trị trong nút con trái nhỏ hơn giá trị trong nút cha, 
// và giá trị trong nút con phải lớn hơn giá trị trong nút cha. 
// Các thuật toán tìm kiếm trên cây nhị phân tìm kiếm có thể được sử dụng để tìm kiếm một giá trị cụ 
// thể trong cây một cách nhanh chóng và hiệu quả.