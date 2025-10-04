#include <iostream>
#include <vector>
using namespace std;


//Hàm kiểm tra xem mảng có phải là một mảng đối xứng (palindrome) hay không.
bool isPalindrome(vector<int>& arr, int start, int end) {
 if (start >= end) return true;//Nếu tất cả các phần tử được so sánh đều bằng nhau hoặc khi chỉ số start vượt qua end, thì mảng được coi là đối xứng và hàm trả về true
 if (arr[start] != arr[end]) return false;//Nếu hai phần tử tại start và end không bằng nhau, thì hàm trả về false (mảng không đối xứng)
 return isPalindrome(arr, start + 1, end - 1);
}

int main() {
 int n;
 cout << "nhap so luong phan tu cua mang: ";
 cin >> n;

 vector<int> arr(n);
 
 cout << "Nhap phan tu cho mang: \n";
 for (int i = 0; i < n; i++) {
     cin >> arr[i];
 }

 if (isPalindrome(arr, 0, n - 1)) {
     cout << "Mang doi xung." << endl;
 } else {
     cout << "Khong doi xung." << endl;
 }

 return 0;
}