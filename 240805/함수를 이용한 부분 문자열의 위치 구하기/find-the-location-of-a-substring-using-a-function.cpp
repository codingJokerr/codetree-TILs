#include <iostream>
#include <string>

using namespace std;

string N, M;
int cnt=-1;

void Judge() {
    for(int i=0; i<N.length()-1; i++) {
            for(int j=0; j<M.length()-1; j++) {
                if(N[i+j]==M[j]){
                    cnt=i;
                }
            }
        
    }
}

int main() {
    cin>>N>>M;

    Judge();
    cout<<cnt;
}