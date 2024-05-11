//
// Created by suyi on 24-5-1.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float f1(1.2f);
    float f2(f1 * 1000000000000000);

    cout << fixed << setprecision(15) << f1 << endl;
    cout << fixed << setprecision(15) << f2 << endl;

    return 0;
}
