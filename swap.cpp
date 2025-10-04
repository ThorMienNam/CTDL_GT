#include <iostream>
//#include <Algorithm>

using namespace std;



/*dung swap con tro 
void swap(int* a, int* b){
    int tmp= *a;
    *a= *b;
    *b= tmp;
}*/
int main()
{
    int a,b;
    cout<<"Nhap a va b:\n";
    cin>>a;
    cin>>b;
    cout<<a << b<<"\n";
    /*dung bien tam
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    cout<<"swap"<<a <<"thanh"<<b;*/
    /*dung XOR
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"swap"<<a <<"thanh"<<b;*/
    /*dung swap
    swap(a,b);
    cout<<"swap"<<a <<"thanh"<<b;*/
    /*dung swap con tro
    swap(&a, &b);
    cout<<"swap"<<a <<"thanh"<<b;*/
} 

