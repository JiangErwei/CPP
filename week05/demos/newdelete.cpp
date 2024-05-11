//
// Created by suyi on 24-5-2.
//
#include <iostream>

using namespace std;

int main() {
    int *p = new int{5};
    cout << *p << endl;
    delete p;

    int *q = new int[]{0, 1, 2, 3, 4};
    cout << *(q + 2) << endl;
    delete []q;


    return 0;
}
