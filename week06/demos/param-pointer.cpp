#include <iostream>
#define PRINT_N(s, n) cout << s << " is " <<n << endl;

using namespace std;

int foo1(int x) {
    x += 10;
    return x;
}

void foo2(int *p) {
    *p += 10;
}

int main() {
    int num1{20};
    int num2{foo1(num1)};

    PRINT_N("num1", num1);
    PRINT_N("num2", num2);

    // int num3{foo2(&num1)};
    foo2(&num1);
    PRINT_N("num1", num1);


    return 0;
}
