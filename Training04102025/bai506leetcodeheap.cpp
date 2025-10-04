#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findK(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>()); 
    return arr[k-1]; 
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"nhap k: ";
    cin>>k;

    cout << "So lon thu " << k << " la: " << findK(arr, k) << endl;
    return 0;
}
