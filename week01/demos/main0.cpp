//
// Created by suyi on 24-4-30.
//

#include <iostream>

using namespace std;

int mul(int, int);

int main() {
    int a, b;
    int res;

    cout << "Input two intergers";
    cin >> a >> b;

    res = mul(a, b);

    cout << "The result is " << res << endl;
    return 0;
}


int mul(int a, int b) {
    return a * b;
}
