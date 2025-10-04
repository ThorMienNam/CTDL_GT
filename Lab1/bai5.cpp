/*Giải thuật tính ước số chung lớn nhất của hai số nguyên dương p và q (p > q) được mô tả
như sau: Gọi r là số dư trong phép chia p và q.
- Nếu r = 0 thì q là ước số chung lớn nhất.
- Nếu r ≠ 0 thì gắn cho p giá trị của q, gán cho q giá trị của r rồi lặp lại quá trình.*/
/*UCLN (p,q):
= {q,nếu q= 0
UCLN(q,p mod q) nếu q !=0 }

Vòng lặp thực hiện chia và gán giá trị cho q và p đến khi q=0
*/

#include <iostream>
using namespace std;

int UCLN(int p, int q){
    if (q==0) return p; // Điều kiện dừng của đệ quy khi q=0 hàm sẽ trả về giá trị của p và p sẽ là UCLN
    
    return UCLN(q, p % q);// Gọi lại đệ quy chính nó vs tham số nhỏ hơn . Sau khi tính đc p% q hàm sẽ gọi lại chính p bằng giá trị của q và q bằng giá trị của p%q
}
int UCLN_While(int p, int q){
    while (q!=0)
    {
      int r = p % q;
      p = q;
      q=r;
    }
    return p;
}


int main()
{
    int q, p;

    cin>> q>>p;
    cout<<"Đệ quy\n";
    cout<<UCLN(q,p)<<endl;
    cout<<"Vong Lap \n";
    cout<<UCLN_While(q,p);
    return 0;
}

