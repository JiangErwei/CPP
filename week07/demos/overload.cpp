#include <iostream>

using namespace std;

int sum(const int &a, const int &b) {
    cout << "here is sum(int, int) \n";
    return a + b;
}

float sum(const float &a, const float &b) {
    cout << "here is sum(float, float) \n";
    return a + b;
}

double sum(const double &a, const double &b) {
    cout << "here is sum(double, double) \n";
    return a + b;
}

// auto sum(const auto &a, const auto &b) {
//     return a + b;
// }

int main() {
    int i1{1}, i2{10};
    float f1{1.f}, f2{10.f};
    double d1{1.}, d2{10.};

    cout << sum(i1, i2) << endl;
    cout << sum(f1, f2) << endl;
    cout << sum(d1, d2) << endl;

    cout << sum(f1, i2) << endl;
    // cout << sum(f1, f2) << endl;
    // cout << sum(d1, d2) << endl;
    return 0;
}
