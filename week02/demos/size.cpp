#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    short s = 0;
    cout << "sizeof(int)=" << sizeof(int) << endl;
    cout << "sizeof(i)=" << sizeof(i) << endl;
    cout << "sizeof(s)=" << sizeof(s) << endl;
    cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << endl;
    cout << "sizeof(long)=" << sizeof(long) << endl;
    cout << "sizeof(size_t)=" << sizeof(size_t) << endl;
    return 0;
}

// 需要注意：sizeof 不是函数，而是一个操作符
// 传入函数的参数必须是“变量”，而这里传入的不仅仅是一个变量。