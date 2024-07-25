#include <iostream>
using namespace std;

int num=1;
void PrintSquare(int n){
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
            if(num==10){
                num=1;
            }
        }
        cout<<endl;
    }
}

int main() {
   int N;   cin>>N;

    PrintSquare(N);
}