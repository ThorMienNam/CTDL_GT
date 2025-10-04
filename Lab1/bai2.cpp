#include <iostream>
using namespace std;
void printswap(const string& str, int x){
    if (x<0) return;
    cout<< str[x];
    printswap(str,x-1);
}
int main(){
    string x;
    cout << "Input: ";
    cin>>x;
    cout<< "Output:";
    printswap(x,x.length()-1);cout<<endl;
    return 0;
}


