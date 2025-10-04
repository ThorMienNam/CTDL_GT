#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Cho 1 mảng tìm cặp số có tổng bằng giá trị cho trước ( target)
int hash_map(vector<int>& arr, int target) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int x : arr) {
        int need = target - x;

        if (freq.find(need) != freq.end()) {
            for (int i = 0; i < freq[need]; i++) {
                cout << "(" << need << ", " << x << ")" << endl;
            }
            count += freq[need];
        }
        freq[x]++;
    }
    return count;
}
int searchPlustarget(vector<int>& arr, int target) {
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int target ;
    cout<<"Nhap target:";
    cin>>target;

    cout << "cac cap so co tong = " << target << " la: " << endl;
    //int total = hash_map(arr, target);
    int total = searchPlustarget(arr, target);
    cout << "Tong cap so:"<<total<< endl;
    searchPlustarget(arr, target);
    
    return 0;
}
