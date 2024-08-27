#include <iostream>
#include <algorithm>
#include <cmath>

#define MAXN 1000

using namespace std;

class Point {
public:
    int x;
    int y;
    int number;
    int distance;

    Point(int x, int y, int number, int distance) 
    : x(x), y(y), number(number), distance(distance) {}

    Point(){}
};

bool Cmp(const Point &a, const Point &b) {
    return a.distance < b.distance;
}

Point points[MAXN];
int main() {
    int n;  cin>>n;
    
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        int distance = abs(x) + abs(y);
        points[i] = Point(x, y, i+1, distance);
    }

    sort(points, points+n, Cmp);

    for(int i=0; i<n; i++) {
        cout<<points[i].number<<endl;
    }
}