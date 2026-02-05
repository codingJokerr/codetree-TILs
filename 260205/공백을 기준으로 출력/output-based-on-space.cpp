#include <iostream>
using namespace std;

int main() {
    // 공백 제외 출력
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for(int i=0; i<str1.length(); i++) {
        if(str1[i] != ' ')
            cout<<str1[i]; 
    }
    for(int i=0; i<str2.length(); i++) {
        if(str2[i] != ' ')
            cout<<str2[i];
    }
}
