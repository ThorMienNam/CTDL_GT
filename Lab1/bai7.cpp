#include <iostream>
using namespace std;

void permute(int nums[], int l, int r) {
    if (l == r) {
        
        for (int i = 0; i <= r; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    } else {
       
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]); 
            permute(nums, l + 1, r); 
            swap(nums[l], nums[i]); 
        }
    }
}

int main() {
    int N;
    cout << "Input: ";
    cin >> N;

    int nums[100];
    for (int i = 0; i < N; i++) {
        nums[i] = i + 1;
    }
    permute(nums, 0, N - 1);

    return 0;
}
