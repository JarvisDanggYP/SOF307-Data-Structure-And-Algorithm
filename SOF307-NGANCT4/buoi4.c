#include <stdio.h>
#include <stdlib.h>
//  Hàng đợi(tiếng anh: Queue) là một cấu trúc dữ liệu dùng để
//  lưu giữ các đối tượng theo cơ chế FIFO
//  (viết tắt từ tiếng Anh: First In First Out), nghĩa là “vào trước ra trước”.
//  *
//  * Trong cấu trúc hàng đợi(queue), ta chỉ có thể thêm các phần tử vào một đầu của queue
//  * (giả sử là cuối),
//  *  và cũng chỉ có thể xóa phần tử ở đầu còn lại của queue(tạm gọi là đầu).
//  *  Như vậy, ở một đầu không thể xảy ra hai hành động thêm và xóa đồng thời.
// Như vậy, với cấu trúc Hàng đợi(Queue), chúng ta có các chức năng sau:
// 	1. EnQueue: Thêm phần tử vào cuối(rear) của Queue.
// 	2. DeQueue: Xóa phần tử khỏi đầu(front) của Queue.
//     Nếu Queue rỗng thì thông báo lỗi.
// 	3. IsEmpty: Kiểm tra Queue rỗng.
// 	4. Front: Lấy giá trị của phần tử ở đầu(front) của Queue.
//      Lấy giá trị không làm thay đổi Queue.
// Để cài đặt được Queue, chúng ta sẽ cần sử dụng các biến như sau:
// 	1. queue[]: Một mảng một chiều mô phỏng cho hàng đợi
// 	2. arraySize: Số lượng phần tử tối đa có thể lưu trữ trong queue[]
// 	3. front: Chỉ số của phần tử ở đang đầu queue.
//      Nó sẽ là chỉ số của phần tử sẽ bị xóa ở lần tiếp theo
// 	4. rear: Chỉ số của phần tử tiếp theo sẽ được thêm vào cuối của queue
#define SIZE 4
int items[SIZE], front = -1, rear = -1; // Hang doi rong , front chi so dau , rear chi so cuoi
void enQueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("ham doi day\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear++;
            items[rear] = value;
            printf("gia tri them : %d, vi tri them : %d\n", items[rear], rear);
        }
    }
}
void deQueue()
{
    if (front == -1)
    {
        printf("ham doi rong\n");
    }
    else
    {
        printf("phan tu da xoa co gia tri %d , co vi tri %d \n", items[front], front);
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
void hienThi()
{
    if (rear == -1)
    {
        printf("ham doi rong\n");
    }
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d\t", items[i]);
    }
}
int top = -1;

void push(int arr[], int n)
{
    // neu top = SIZE -1 => in ra arr day
    // nguoc lai them duoc vao dinh ++top , arr[top] = value
}
void pop()
{
    // neu arr rong top = -1  => khong xoa dc
    // nguoc lai --top
}
int main()
{
    enQueue(0);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    hienThi();
    deQueue();
    hienThi();
    deQueue();
    hienThi();
    return 0;
}