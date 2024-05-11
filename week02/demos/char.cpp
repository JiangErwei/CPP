#include <iostream>
using namespace std;

int main() {
    char c1 = 'C';
    char c2 = 80;
    char c3 = 0x50;
    char16_t c4 = u'好';
    char32_t c5 = U'坏';
    cout << "Output type is character: \n";
    cout << c1 << ":" << c2 << ":" << c3 << ":" << c4 << ":" << c5 << endl;

    cout << "Output type is positive integer: \n";
    cout << +c1 << ":" << +c2 << ":" << +c3 << ":" << +c4 << ":" << +c5 << endl;

    cout << "Output type is negative integer: \n";
    cout << -c1 << ":" << -c2 << ":" << -c3 << ":" << -c4 << ":" << -c5 << endl;

    return 0;
}
