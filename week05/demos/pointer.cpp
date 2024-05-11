//
// Created by suyi on 24-5-2.
//

#include <iostream>
using namespace std;

/**
 * Operator `&` can take the address of variable or object of fundamental types.
 * Operator `*` can take the content that the pointer points to.
 * 根据上面的描述，很容易得到：
 * 1. `&` 作用于变量or对象，可以取出存放变量or对象的地址
 * 2. `*` 作用于指针，指针存储的是地址，`*` 可以取出地址中存放的内容
 */
int main() {
    int16_t n{10};
    int16_t *p1{&n};
    int16_t *p2{&n};

    cout << sizeof(n) << endl;
    cout << sizeof(p1) << endl;
    cout << n << endl;
    cout << &n << endl;
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << &p1 << endl;

    return 0;
}
