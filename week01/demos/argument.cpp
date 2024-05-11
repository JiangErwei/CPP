//
// Created by suyi on 24-4-30.
//

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    for (int i(0); i < argc; ++i)
        cout << i << ": " << argv[i] << endl;
    return 0;
}
