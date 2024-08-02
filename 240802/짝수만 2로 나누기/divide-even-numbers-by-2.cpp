/*
arr는 &arr[0] (==첫 번째 원소의 주소)를 가리킨다.
arr+0   arr+1   arr+3
&arr[0] &arr[1] &arr[3]

*x = arr일 때,
*(x+1) == arr[1]

결론
*(arr+i) == arr[i]
(arr+i) == &arr[i]

arr만 넘겨주면 배열이 함수의 인자로 넘겨지는 것이다.
(arr는 첫번째 원소의 주소를 나타내는 것이며, 배열은 연속하여 주소가 할당되기 때문에
arr만 넘겨줘도 배열이 통째로 넘어온 것처럼 이용할 수 있다)


void Modify(int *x) {
    cout<<x[0]<<endl;   // 5
    cout<<x[1]<<endl;   // 6

    x[0]=100;   // arr[0] = 100;
}

int main() {
    int arr[4] = {5, 6, 9, 2};
    Modify(arr);
    cout<<arr[0]<<endl; // 100
}


배열을 함수의 인자로 넘길 때, 포인터가 아닌 int x[]와 같은 형태로 사용할 수 있다.
void Modify(int x[]) {
    cout<<x[0]<<endl;   // 5
    cout<<x[1]<<endl;   // 6

    x[0] = 100;
}

int main() {
    int arr[4] = {5, 6, 9, 2};
    Modify(arr);
    cout<<arr[0]<<endl; // 10
}
*/


#include <iostream>
using namespace std;

#define MAX_N 50

int arr[MAX_N];
int N;

void DivideEven(int *arr) {
    for(int i=0; i<N; i++) {
        if(arr[i]%2== 0){
            arr[i] /= 2;
        }
        cout<<arr[i]<<" ";
    }  
}

int main() {
    cin>>N;

    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }

    DivideEven(arr);
}