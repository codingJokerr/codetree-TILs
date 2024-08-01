/* 
call-by-value: 복사값 넘겨줌(실제 값은 변경X)
! 포인터(변수의 주소를 나타냄) 사용 !

void swap(int *a, int *b) {// 변수 a, b의 주소를 나타내려면 &a, &b값을 넘겨받아야 한다.
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b <<endl;
}

int main() {
    int n=10, m=20;

    swap(&n, &m);
    // 변수 a, b의 주소를 나타내려면 &a, &b값을 넘겨받아야 한다.

    cout << n << " " << m <<endl;
    // 실제 값도 swap 되었음을 알 수 있다.
}
*/

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int n,m;    cin>>n>>m;

    swap(&n, &m);

    cout<<n<<" "<<m;
}