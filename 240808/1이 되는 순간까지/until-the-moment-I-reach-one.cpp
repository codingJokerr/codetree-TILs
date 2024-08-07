#include <iostream>
using namespace std;

// n에서 시작하여 1이 되기위해 거쳐야하는 횟수를 반환하는 함수
int GetNum(int n) {
    if(n==1)    // 1이면 더이상 진행할 작없이 없으므로 더 필요한 횟수는 0이다.
        return 0;

    if(n%2==0)  // 2로 나눠 진행했을 때의 횟수 + 1번
        return GetNum(n/2) +1;
    else        // 3으로 나눠 진행했을 때의 횟수 +1번
        return GetNum(n/3) +1;
}

int main() {
    int n;  cin>>n;

    cout<<GetNum(n);
}