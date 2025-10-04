#include<iostream>
using namespace std;
int sumN(int n) {
    if (n <= 0) return 0; 
    return (n % 10) + sumN(n / 10); 
}

int main(){
    int n;
    cout<<"nhap so nguyen N:";
    cin>>n;
    cout<<sumN(n);
   
    return 0;
} 
