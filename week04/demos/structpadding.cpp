#include <iostream>
using namespace std;

struct Student1{
    int id;
    bool male;
    char label;
    float weight;
};

struct Student2{
    int id;
    bool male;
    float weight;
    char label;
};

int main()
{
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of char: " << sizeof(char) << endl;
    cout << "Size of Student1: " << sizeof(Student1) << endl;
    cout << "Size of Student2: " << sizeof(Student2) << endl;
    return 0;
}

/**
 * 需要注意：在 C++ 中的 struct 几乎与 class 相同，在上面的例子中并没有使用 typedef 来定义结构体，而在 C 中是需要 typedef 的。
 * 另外，C/C++ 在寄存器中强制要求字节对齐，因此 sizeof 的结果和手动计算结果不同。
 *
 */