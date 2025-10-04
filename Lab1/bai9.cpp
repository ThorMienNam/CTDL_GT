#include <iostream>
using namespace std;



//hàm đệ quy để tìm tất cả các tổ hợp các phần tử trong mảng sao cho tổng của chúng bằng giá trị b
void finds(int A[], int N, int B, int currentCombination[], int x, int start) {
    if (B == 0) {
        cout << "{ ";
        for (int i = 0; i < x; i++) {
            cout << currentCombination[i] << " ";
        }
        cout << "}" << endl;
        return;
    }
    for (int i = start; i < N; i++) {
        if (A[i] <= B) { 
            currentCombination[x] = A[i]; 
            finds(A, N, B - A[i], currentCombination, x + 1, i); 
        }
    }
}

int main() {
    int N, B;
    
    
    cout << "So phan tu cua mang: ";
    cin >> N;
    
    int A[100]; 
    cout << "Phan tu cua mang: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Gia tri B: ";
    cin >> B;

    int currentCombination[100];
    cout << "To hop thoa mang de bai: " << endl;
    finds(A, N, B, currentCombination, 0, 0);

    return 0;
}
