#include <iostream>
using namespace std;

// Hàm đệ quy quay lui
bool phanvung(int arr[], int n, int sum1, int sum2) {
    // Nếu đã duyệt hết các phần tử
    if (n == 0)
        return sum1 == sum2;

    // Thử thêm phần tử arr[n-1] vào tập con thứ nhất hoặc thứ hai
    return phanvung(arr, n - 1, sum1 + arr[n - 1], sum2) || 
           phanvung(arr, n - 1, sum1, sum2 + arr[n - 1]);
}
bool canPartition(int arr[], int n) {
    // Tính tổng tất cả phần tử
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    // Nếu tổng là số lẻ thì không thể chia thành hai tập con bằng nhau
    if (totalSum % 2 != 0)
        return false;
    // Sử dụng hàm đệ quy quay lui
    return phanvung(arr, n, 0, 0);
}

int main() {
    // Tập hợp các số nguyên
    int arr[] = {1, 5, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canPartition(arr, n))
        cout << "Co the chia thanh hai tap con co tong bang nhau."<<endl;
    else
        cout << "Khong the chia thanh hai tap con." <<endl;
    return 0;
}
