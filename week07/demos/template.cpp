//
// Created by suyi on 24-5-3.
//

#include <iostream>
#include <typeinfo>
using namespace std;

struct Point {
    float x;
    float y;
};

template<class T1, class T2>
T1 sum(const T1 &a, const T2 &b) {
    cout << "Type " << typeid(T1).name() << " and " << typeid(T2).name() << " is called!\n";
    return a + b;
}

// 实例化
// template int sum<int>(int, int);
//
// template float sum<>(float, float);
//
// template double sum(double, double);

// template float sum(float, int);
// template auto sum(double, float);

// 特例化
template<>
Point sum<Point>(const Point &a, const Point &b) {
    const Point c{
        a.x + b.x,
        a.y + b.y
    };
    return c;
}

int main() {
    cout << sum(1.f, 2.2) << endl;

    Point a{0.1f, 1.1f};
    Point b{0.2f, 1.2f};
    // cout << sum(a, b) <<endl;
    Point c{sum(a, b)};
    cout << c.x << endl << c.y << endl;
    return 0;

    qsort();
}
