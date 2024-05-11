#include <iostream>
using namespace std;

int main() {
    int a = 56789;
    int b = 56789;
    int c = a * b;
    cout << "int c = " << c << endl;

    unsigned int c1 = a * b; //danger operation
    cout << "unsigned int c = " << c1 << endl;

    long c2 = a * b;
    cout << "long c = " << c2 << endl;
    // 在将结果赋值给 c2 之前，a * b 的计算已经产生了一个 int 类型的溢出结果。
    // 即使 c2 是 long 类型，已经溢出的结果仍然会被保留并赋值给 c2。
    // 因此，即使 long 类型能够存储更大的数值，这里的 c2 仍然显示了溢出的结果，因为溢出发生在将值赋予 c2 之前。

    return 0;
}
