#include <iostream>

using namespace std;

void printCombination(int currentCombination[], int K) {
    cout << "{ ";
    for (int i = 0; i < K; i++) {
        cout << currentCombination[i] << " ";
    }
    cout << "}" << endl;
}

void findCombinations(int arr[], int N, int K, int start, int currentCombination[], int index) {
    // Nếu đã chọn đủ K phần tử, in tổ hợp hiện tại
    if (index == K) {
        printCombination(currentCombination, K);
        return;
    }

    // Duyệt qua các phần tử từ vị trí start đến hết mảng
    for (int i = start; i < N; i++) {
        // Thêm phần tử hiện tại vào tổ hợp
        currentCombination[index] = arr[i];

        // Tiếp tục tìm các tổ hợp bằng cách gọi đệ quy với phần tử tiếp theo
        findCombinations(arr, N, K, i + 1, currentCombination, index + 1);
    }
}

int main() {
    int N, K;
    cout << "Nhap so luong phan tu N: ";
    cin >> N;

    cout << "Nhap so luong phan tu trong to hop K: ";
    cin >> K;

    int arr[100]; // Mảng chứa tập hợp các phần tử từ 1 đến N
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;  // Các phần tử của tập hợp là từ 1 đến N
    }

    int currentCombination[100];  // Mảng tạm để lưu tổ hợp hiện tại
    cout << "Cac to hop gom " << K << " phan tu la: " << endl;
    findCombinations(arr, N, K, 0, currentCombination, 0);  // Gọi hàm tìm tổ hợp

    return 0;
}
