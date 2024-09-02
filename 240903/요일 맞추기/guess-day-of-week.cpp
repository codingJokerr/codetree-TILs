#include <iostream>
using namespace std;

int main() {
    // m1월 d1일 ~ m2월 d2일까지의 날짜 차 구한 후 %7의 값에 따라 요일 구하기

    int m1, m2, d1, d2;
    cin>>m1>>m2>>d1>>d2;

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int dif=0;   
    // Day에 대한 처리
    if(d2 > d1) {
        dif = d2-d1;
    }
    else {// d2 < d1
        dif = d2 - d1 + month[m2-1];
        m2--;
        // 5/2 - 4/29
    }

    // Month에 대한 처리
    for(int i=m1+1; i<m2; i++) {
        dif += month[i];
    }

    //cout<<"***"<<dif<<endl;

    int ans = dif % 7;
    switch (ans) {
	case 1:
        cout<<"Tue";
        break;
	case 2:
        cout<<"Wed";
        break;
	case 3:
        cout<<"Thu";
        break;
	case 4:
        cout<<"Fri";
        break;
	case 5: 
		cout<<"Sat";
        break;
	case 6:
        cout<<"Sun";
        break;
	default:
        cout<<"Mon";
	}
}