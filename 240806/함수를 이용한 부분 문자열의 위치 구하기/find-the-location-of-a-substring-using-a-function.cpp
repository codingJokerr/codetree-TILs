#include <iostream>
#include <string>

using namespace std;

string N,M;
int cnt=-1;
// N이 긴거, M이 짧은 거
void FindLoc() {
    for(int i=0; i<N.length()-1; i++) {
        if(N[i]==M[0]){
            for(int j=0; j<M.length()-1; j++) {
                if(N[i+j]==M[j]) 
                    cnt = i;
            }
        }
        
    }
}

int main(){
    cin>>N>>M;

    FindLoc();
    cout<<cnt;
}