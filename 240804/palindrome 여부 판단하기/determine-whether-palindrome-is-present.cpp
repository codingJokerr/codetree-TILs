/*
void Modify(string s) {}
int main() { Modify(str); }

string s로 받으면 call by value 형태로 인자 값이 전달되므로 원본 값이 변하지 않는다.
call by reference 형태로 넘기려면
 방법1) 포인터 이용
void Modify(string *s) { *s+= "apple"; }
int main() { Modify(&str); }

 방법2) &연산자만 이용해 call by reference 구현 (더 많이 사용)
void Modify(string &s) { s+= "apple"; }
int main() { Modify(str); }
*/


#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(string &s) {
    int len = s.length();
    //cout<<"***"<<len<<"***"<<endl;
    for(int i=0; i<len/2; i++) {
        //cout<<"i: "<<i<<endl;
        if(s[i] != s[len-1-i])
            return false;
    }
    return true;
}

int main() {
    string s;   cin>>s;

    if(IsPalindrome(s))
        cout<<"Yes";
    else
        cout<<"No";
}